// program file for  Exercise 3.26
// encryption program file

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;

    cout << "Enter a 4 digit number: ";
    cin >> n;
    int copy = n;

    int d4 = (n % 10 + 7) % 10;
    n /= 10;

    int d3 = (n % 10 + 7) % 10;
    n /= 10;

    int d2 = (n % 10 + 7) % 10;
    n /= 10;

    int d1 = (n % 10 + 7) % 10;
    n /= 10; 

    cout << "Encryption of " << copy << " is " << d3 << d4 << d1 << d2;

    return 0;
}