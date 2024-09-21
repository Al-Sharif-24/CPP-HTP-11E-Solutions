// program file for Exercise 3.19

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int d;

    cout << "Enter only one dimension of a square checkerboard pattern: ";
    cin >> d;

    for(int i = 0; i < d; ++i) {
        if(i % 2 == 1)
            cout << ' ';

        for(int j = 0; j < d; ++j) {
            cout << "* ";
            if(j == d - 1)
                cout << "\n";
        }
    }

    return 0;
}