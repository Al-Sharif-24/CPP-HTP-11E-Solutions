// program file for Exercise 4.20

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int term = 1;
    int direction = 1;
    int row;

    cout << "Enter the number of rows required in the diamond: ";
    std::cin >> row;

    for(int i = 0; i < row; ++i) {
        if(1 == direction) {
            for(int j = 0; j < row / 2 - i; ++j) 
                cout << " ";

            for(int j = 0; j < term; ++j) {
                cout << "*";
            }
            term += 2;

            cout << endl;
        } else {
            for(int j = (row / 2) - 1; j <= i; ++j) 
                cout << " ";

            for(int j = 0; j < term; ++j) {
                cout << "*";
            }
            term -= 2;

            cout << endl;
        }

        if(row / 2 - 1 == i) {
            direction = -1;
            term -= 4;
        }
    }    

    return 0;
}