// program file for Exercise 3.5

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double sales{0};
    double salary{0};

    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;

    while(sales > 0) {
        salary = 200 + (sales * 9)/100;
        cout << "Salary is: $" << salary << endl;

        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales;
    }

    return 0;
}