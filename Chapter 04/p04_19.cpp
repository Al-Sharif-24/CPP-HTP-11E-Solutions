// program file for Exercise 4.19

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int term = 1;
    int direction = 1;

    for(int i = 0; i < 10; ++i) {
        if(1 == direction) {
            for(int j = 0; j < 5 - i; ++j) 
                cout << " ";

            for(int j = 0; j < term; ++j) {
                cout << "*";
            }
            term += 2;

            cout << endl;
        } else {
            for(int j = 4; j <= i; ++j) 
                cout << " ";

            for(int j = 0; j < term; ++j) {
                cout << "*";
            }
            term -= 2;

            cout << endl;
        }

        if(4 == i) {
            direction = -1;
            term -= 4;
        }
    }    

    return 0;
}