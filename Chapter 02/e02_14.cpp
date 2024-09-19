// Program that gets two integers,
// Then prints the larger, or equal.

#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter two numbers: ";

    int num1{};
    int num2{};
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is larger\n";
    }

    if (num2 > num1)
    {
        cout << num2 << " is larger\n";
    }

    if (num1 == num2)
    {
        cout << "These numbers are equal.\n";
    }

    return 0;
}