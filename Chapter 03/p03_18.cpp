// program file for Exercise 3.18

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int bin;
    int decimal{0};
    int multiplier{1};

    cout << "Enter a binary number: ";
    cin >> bin;

    while(bin > 0) {
        int digit = bin % 10;
        decimal += digit * multiplier;
        bin /= 10;
        multiplier *= 2;
    }

    cout << "The decimal equvivalent number is " << decimal;

    return 0;
}