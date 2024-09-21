#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x{0};

    cout << "Enter a 5 digit integer: ";
    cin >> x;

    for(int i{4}; i >= 0; i--) {
        int divisor{1};

        for(int j{0}; j < i; j++) 
            divisor *= 10; 

        int digit = x / divisor;

        std::cout << digit << "   ";
        x = x - (digit * divisor);
    }


    return 0;
}