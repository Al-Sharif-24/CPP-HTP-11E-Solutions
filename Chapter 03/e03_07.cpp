// A program that prints the largest number among 10 integers.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter an integer: ";
    int number{};
    cin >> number;
    int largest{number}; // suppose first number is the largest.

    int counter{2};
    while (counter <= 10) // from 2 to 10.
    {

        if (number > largest)
        {
            largest = number;
        }
        ++counter;
    }

    cout << "\nThe largest number is " << largest;

    return 0;
}
