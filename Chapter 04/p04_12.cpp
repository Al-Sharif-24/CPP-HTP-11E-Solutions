// program file for Exercise 4.12

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Enter a number betweeen 1 and 30: ";
    cin >> n1;

    cout << "Enter a number betweeen 1 and 30: ";
    cin >> n2;

    cout << "Enter a number betweeen 1 and 30: ";
    cin >> n3;

    cout << "Enter a number betweeen 1 and 30: ";
    cin >> n4;

    cout << "Enter a number betweeen 1 and 30: ";
    cin >> n5;    

    cout << endl << n1 << endl;
    for(int i{0}; i < n1; ++i) {
        cout << "*";
    }

    cout << endl << n2 << endl;
    for(int i{0}; i < n2; ++i) {
        cout << "*";
    }

    cout << endl << n3 << endl;
    for(int i{0}; i < n3; ++i) {
        cout << "*";
    }

    cout << endl << n4 << endl;
    for(int i{0}; i < n4; ++i) {
        cout << "*";
    }

    cout << endl << n5 << endl;
    for(int i{0}; i < n5; ++i) {
        cout << "*";
    }

    return 0;
}