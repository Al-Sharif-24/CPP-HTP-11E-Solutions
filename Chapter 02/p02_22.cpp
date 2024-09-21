#include<iostream>

using std::cin;
using std::cout;

int main()
{
    char x;

    cout << "Enter a character: ";
    cin >> x;

    cout << static_cast<int>(x);

    return 0;
}