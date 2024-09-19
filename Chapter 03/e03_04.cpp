// Program that determines if customers exceeded credit limit or not.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{

    // making floating numbers have 2 digits and in fixed point form.
    cout << std::setprecision(2) << std::fixed;

    cout << "Enter account number (or -1 to quit): ";
    int accountNumber{0};
    cin >> accountNumber;

    while (accountNumber != -1)
    {

        cout << "Enter beginning balance: ";
        double beginningBalance{0.0};
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        double totalCharges{0.0};
        cin >> totalCharges;

        cout << "Enter total credits: ";
        double totalCredits{0.0};
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        double creditLimit{0.0};
        cin >> creditLimit;

        double newBalance{beginningBalance + totalCharges - totalCredits};
        cout << "New balance is " << newBalance;

        if (newBalance > creditLimit)
        {
            cout << "\nAccount:      " << accountNumber;
            cout << "\nCredit limit: " << creditLimit;
            cout << "\nBalance:      " << newBalance;
            cout << "\nCredit Limit Exceeded.";
        }

        cout << "\n\nEnter Account Number (or -1 to quit): ";
        cin >> accountNumber;
    }

    return 0;
}
