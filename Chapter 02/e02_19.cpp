// Program that reads an integer and determins whether it's odd or even.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter an integer: ";

    int number{};
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Even.\n";
    }

    if (number % 2 != 0)
    {
        cout << "Odd.\n";
    }

    return 0;
}