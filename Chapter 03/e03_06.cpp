// Program that calculates the gross pay for each of several employees

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    // making floating numbers have 2 digits and in fixed point form.
    cout << std::setprecision(2) << std::fixed;

    cout << "Enter hours worked (-1 to end): ";
    int hoursWorked{0};
    cin >> hoursWorked;

    while (hoursWorked != -1)
    {
        cout << "Enter hourly rate of the employee: ";
        double hourlyRate{0.0};
        cin >> hourlyRate;

        // Salary is "straight time" for the first 40 hours,
        // and "time and a half" for all the hours worked over 40 hours.
        double salary{0.0};
        if (hoursWorked > 40)
        {
            salary = 40 * hourlyRate + (1.5 * hourlyRate) * (hoursWorked - 40);
        }
        else
        {
            salary = hourlyRate * hoursWorked;
        }
        // You can use something like this equation but if-else is easier.
        // double salary{hourlyRate * hoursWorked +
        //              hourlyRate * 0.5 *
        //                  (hoursWorked > 40 ? hoursWorked - 40 : 0)};

        cout << "Salary is $" << salary;

        cout << "\n\nEnter hours worked (-1 to end): ";
        cin >> hoursWorked;
    }

    return 0;
}