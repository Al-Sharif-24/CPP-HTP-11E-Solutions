// Program that finds the smallest of several integers.

#include <format>
#include <iostream>

using std::cin;
using std::cout;
using std::format;

int main()
{

    cout << "Enter the number of values to proccess: ";
    int count{};
    cin >> count;

    cout << "Enter an integer: ";
    int number{};
    cin >> number;

    int smallest{number};
    for (int i{2}; i <= count; ++i)
    {

        cout << "Enter an integer: ";
        cin >> number;

        if (smallest > number)
        {
            smallest = number;
        }
    }

    cout << format("The smallest value is: {}.\n", smallest);

    return 0;
}