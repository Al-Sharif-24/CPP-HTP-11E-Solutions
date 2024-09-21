// program file for Exercise 3.6

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int hoursWorked{0};
    double hourlyRate{0};
    double salary{0};

    cout << "Enter hours worked (-1 to end): ";
    cin >> hoursWorked;

    while(hoursWorked > 0) {
        double additionalSalary{0};

        cout << "Enter hourly rate of the employee (-1 to end): ";
        cin >> hourlyRate;

        if(hoursWorked > 40) {
            int extraHours = hoursWorked - 40;
            additionalSalary = 0.5 * hourlyRate * extraHours;
        }

        salary = hourlyRate * hoursWorked + additionalSalary;
        cout << "Salary is $ " << salary << endl;

        cout << "Enter hours worked (-1 to end): ";
        cin >> hoursWorked;
    }

    return 0;
}