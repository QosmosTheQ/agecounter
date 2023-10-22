Sure, here is an English README file for your GitHub repository:

---

# Age Calculator

This simple C++ program calculates and displays your age in years based on your date of birth (dd.mm.yyyy format). The program continuously updates and shows your age in real-time.

## How to Use

1. Clone the repository to your local machine.
2. Compile the program using a C++ compiler. For example, if you're using g++, run: 
    ```shell
    g++ -o agecounter main.cpp -std=c++11 -pthread
    ```
3. Run the compiled executable:
    ```shell
    ./agecounter
    ```
4. Enter your date of birth in the format `dd.mm.yyyy` when prompted.
5. The program will display your age in years and continuously update it in real-time.

## Dependencies

- This program uses the `<iostream>`, `<chrono>`, `<iomanip>`, `<thread>`, and `<unistd.h>` libraries.

## How It Works

1. The program prompts you to enter your date of birth.
2. It calculates your age in seconds based on the provided date of birth.
3. It then converts the age from seconds to years and continuously updates and displays it in real-time.

## Notes

- This program assumes a 365.25-day year for more accurate calculations.

Feel free to use and modify this program as needed!

---
