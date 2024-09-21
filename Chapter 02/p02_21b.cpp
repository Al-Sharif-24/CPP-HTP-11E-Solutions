#include<iostream>

using std::cout;
using std::endl;

int main()
{

    for(int i{1}; i <= 8; i++) {
        cout << (i % 2 == 0? " ": "") << "* * * * * * * *" << endl;
    }
    
    return 0;
}