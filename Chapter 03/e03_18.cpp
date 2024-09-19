// Program that prints the decimal equivalent of a binary number
// (inputted as int).

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter binary number: ";
    int binaryNumber{};
    cin >> binaryNumber;
    int binaryCopy{binaryNumber};

    int decimalNumber{};
    int positionalValue{1};

    while (binaryCopy > 0)
    {

        int digit{binaryCopy % 10};
        decimalNumber += digit * positionalValue;

        binaryCopy /= 10;
        positionalValue *= 2;
    }

    cout << "Decimal equivalent of " << binaryNumber << "\nIs " << decimalNumber
         << '\n';

    return 0;
}