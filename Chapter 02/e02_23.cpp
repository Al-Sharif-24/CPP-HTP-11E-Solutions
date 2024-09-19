// Program that gets a five-digit integer,
// and prints separated digits.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter a five-digits integer: ";

    int number{};
    cin >> number;

    cout << number / 10000;
    cout << "   " << number / 1000 % 10;
    cout << "   " << number / 100 % 10;
    cout << "   " << number / 10 % 10;
    cout << "   " << number % 10 << '\n';
    return 0;
}