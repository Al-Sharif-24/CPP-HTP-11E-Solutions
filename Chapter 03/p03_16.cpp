// program file for Exercise 3.16

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n{};

    cout << "Enter an integer: ";
    cin >> n;

    for(int i = 0; i < n; ++i) {
        if(i == 0 || i == n - 1) {
            for(int j = 0; j < n; ++j)
                cout << "*";

            cout << "\n";
        } else {
            cout << "*";

            for(int j = 0; j < n - 2; ++j) {
                cout << " ";
            }
            cout << "*\n";
        }
    }

    return 0;
}