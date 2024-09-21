// program file for Exercise 4.17

#include <iostream>

using std::cout;
using std::endl;

int main(){
    for(int i = 0; i < 10; ++i) {
        for(int j = 0; j <= i; ++j) 
            cout << "*";

        for(int j = 0; j <= 10 - i; ++j) 
            cout << " ";
        
        cout << "  ";

        for(int j = 10 - i; j > 0 ; --j) 
            cout << "*";

        for(int j = i; j > 0; --j) {
            cout << " ";
        }

        cout << "  ";

        for(int j = i; j > 0 ; --j) 
            cout << " ";

        for(int j = 0; j < 10 - i; ++j) 
            cout << "*";
            
        cout << "  ";

        for(int j = 0; j < 10 - i; ++j) 
            cout << " ";

        for(int j = 0; j <= i; ++j)
            cout << "*";

        cout << "\n";
    }

    return 0;
}