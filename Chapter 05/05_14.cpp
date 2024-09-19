// Program that prints charts showing fahrenheit equivalents of all celsius from
// 0 to 100, and vice versa.

#include <format>
#include <iostream>
using namespace std;

int celsius(int fahrenheit);
int fahrenheit(int celsius);

int main()
{
    cout << format("{:>7}{:>13}\n", "Celsius", "Fahrenheit");
    for (int degree{0}; degree <= 100; ++degree)
    {
        cout << format("{:>7}{:>13}\n", degree, fahrenheit(degree));
    }
    cout << format("{:>10}{:>10}\n", "Fahrenheit", "Celsius");
    for (int degree{32}; degree <= 212; ++degree)
    {
        cout << format("{:>10}{:>10}\n", degree, celsius(degree));
    }
    return 0;
}

int celsius(int fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int fahrenheit(int celsius)
{
    return celsius * 9.0 / 5.0 + 32;
}