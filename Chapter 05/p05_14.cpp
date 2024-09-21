// program file for Exercise 5.14

#include <iostream>
#include <format>

using namespace std;

double Fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double Celsius (double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    cout << std::format("Celsius Fahrenheit") << endl;

    for(int i = 0;i <= 100; ++i) {
        cout << std::format("{:<8}{:<11}", i, Fahrenheit(i)) << endl;
    }

    cout << std::format("Fahrenheit Celsius") << endl;

    for(int i = 32; i <= 212; ++i) {
        cout << std::format("{:<11}{:<11.3}", i, Celsius(i)) << endl;
    }

    return 0;
}