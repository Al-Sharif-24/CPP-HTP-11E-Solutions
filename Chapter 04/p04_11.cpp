// program file for Exercise 4.11

#include <iostream>

using std::cout;
using std::endl;

int main(){

    cout << "a)" << endl;
    for(int i = 0; i <= 10; ++i) {
        for(int j = 0; j <= i; ++j) 
            cout << "*";
        
        cout << "\n";
    }
    cout << endl;


    cout << "b)" << endl;
    for(int i = 10; i > 0; --i) {
        for(int j = i; j > 0 ; --j) 
            cout << "*";
        
        cout << "\n";
    }
    cout << endl;

    cout << "c)" << endl;
    for(int i = 0; i <= 10; ++i) {
        for(int j = i; j > 0 ; --j) 
            cout << " ";
                
        for(int j = 0; j <= 10 - i; ++j) 
            cout << "*";

        cout << "\n";
    }
    cout << endl;

    cout << "d)" << endl;
    for(int i = 10; i > 0; --i) {
        for(int j = i; j > 0 ; --j) 
            cout << " ";
                
        for(int j = 0; j <= 10 - i; ++j) 
            cout << "*";

        cout << "\n";
    }
    cout << endl;

    return 0;
}