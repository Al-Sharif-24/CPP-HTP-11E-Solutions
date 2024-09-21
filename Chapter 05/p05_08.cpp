// program file for 5.8

#include <iostream>

using namespace std;

long integerPower(int base, int exponent);

int main() {
    unsigned int base;
    int exponent;

    cout << "Enter a base and a exponent" << endl;
    cin >> base >> exponent;

    cout << integerPower(base, exponent);

    return 0;
}

long integerPower(int base, int exponent)
{
    int result = 1;

    for(int i = 0;i < exponent; ++i) 
        result *= base;

    return result;
}
