#include <iostream>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Doğum tarihinizi girin (dd.mm.yyyy): ";
    std::string dob;
    std::cin >> dob;

    struct tm tm;
    strptime(dob.c_str(), "%d.%m.%Y", &tm);
    tm.tm_hour = 12; // Saat dilimini ayarla
    std::time_t birthTime = mktime(&tm);
    if (birthTime == -1) {
        std::cerr << "Hatalı tarih formatı. Program sonlandırılıyor." << std::endl;
        return 1;
    }

    std::time_t currentTime;
    double ageInYears;

    while (true) {
        currentTime = std::time(nullptr);
        ageInYears = std::difftime(currentTime, birthTime) / (60 * 60 * 24 * 365.25);
        std::cout << std::fixed << std::setprecision(9) << "Yaşınız: " << ageInYears << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
