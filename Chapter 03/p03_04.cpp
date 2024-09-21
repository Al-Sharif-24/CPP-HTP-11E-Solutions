// program file for Exercise 3.4

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int accountNum{0};
    double beginB(0);
    double totalCharges{0};
    double totalCredit{0};
    double creditLimit{0};
    double newB{0};

    cout << "Enter account number (-1 for exit): ";
    cin >> accountNum;

    while(accountNum > 0) {
        cout << "Enter beginnig balance: ";
        cin >> beginB;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredit;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        newB = beginB + totalCharges - totalCredit;
        cout << "New balance is " << newB << endl;

        if(newB > creditLimit) {
            cout << "Account: " << accountNum << endl;
            cout << "Credit Limit: " << creditLimit << endl;
            cout << "Balance is: " << newB << endl;
            cout << "Credit Limit Exceeded" << endl;

        }

        cout << "Enter account number (-1 for exit): ";
        cin >> accountNum;  
    }

    return 0;
}