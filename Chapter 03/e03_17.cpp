// Program that reads in a five-digit integer
// and determines whether it's a palindrome.

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    cout << "Enter a five-digit integer: ";
    int number{};
    cin >> number;
    int copy{number}; // make a copy to change it freely.

    int digit1{copy % 10};
    copy /= 10;

    int digit2{copy % 10};
    copy /= 10;

    copy /= 10; // No need for digit3

    int digit4{copy % 10};
    copy /= 10;

    int digit5{copy % 10};
    copy /= 10;

    bool isPalindrome{false};
    if (digit1 == digit5)
    {
        if (digit2 == digit4)
        {
            isPalindrome = true;
        }
    }

    cout << number << (isPalindrome ? " is" : " is NOT") << " a palindrome.\n";

    return 0;
}