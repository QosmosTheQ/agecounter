#include <iostream>
#include <chrono>
#include <iomanip>
#include <thread>
#include <unistd.h>

int main() {
    std::cout << "date of birth (dd.mm.yyyy): ";
    std::string dob;
    std::cin >> dob;

    std::tm tm = {};
    std::istringstream ss(dob);
    ss >> std::get_time(&tm, "%d.%m.%Y");

    auto birthTime = std::chrono::system_clock::from_time_t(std::mktime(&tm));

    while (true) {
        auto currentTime = std::chrono::system_clock::now();
        auto ageInSeconds = std::chrono::duration_cast<std::chrono::seconds>(currentTime - birthTime).count();
        double ageInYears = ageInSeconds / (60.0 * 60.0 * 24.0 * 365.25);

        std::cout << "\033[H\033[J"; 
        std::cout << std::fixed << std::setprecision(9) << "ur age is: " << ageInYears << std::endl;
        usleep(100);
    }

    return 0;
}
