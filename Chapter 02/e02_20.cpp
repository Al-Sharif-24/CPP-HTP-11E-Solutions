// Program that reads two integers,
// and determines if the first is a multiple of the second

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter two integers: ";

    int number1{};
    int number2{};

    cin >> number1 >> number2;

    if (number1 % number2 == 0)
    {
        cout << "The first is a multiple if the second.\n";
    }

    if (number1 % number2 != 0)
    {
        cout << "The first is NOT a multiple if the second.\n";
    }

    return 0;
}