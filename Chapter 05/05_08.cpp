// Program that computes the integer exponentiation.
#include <format>
#include <iostream>
using namespace std;

int integerPower(int base, int exponent);

int main()
{
    cout << "Enter the base: ";
    int base{};
    cin >> base;

    cout << "Enter the exponent: ";
    int exponent{};
    cin >> exponent;

    cout << format("{} power {} = {}\n", base, exponent,
                   integerPower(base, exponent));

    return 0;
}
int integerPower(int base, int exponent)
{
    int result{1};
    for (int i{1}; i <= exponent; ++i)
    {
        result *= base;
    }
    return result;
}