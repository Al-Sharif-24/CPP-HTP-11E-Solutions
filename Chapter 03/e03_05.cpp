// A program that calculate and displays
// salespersons weekly earnings based on sales.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter sales in dollars (-1 to end): ";
    int sales{};
    cin >> sales;

    // making floating numbers have 2 digits and in fixed point form.
    cout << std::setprecision(2) << std::fixed;
    while (sales != -1)
    {
        double salary{sales * 0.09 + 200};
        cout << "Salary is: $" << salary;

        cout << "\n\nEnter sales in dollars (-1 to end): ";
        cin >> sales;
    }

    return 0;
}