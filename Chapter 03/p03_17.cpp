// program file for Exercise 3.17

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number{0};
    int counter{5};
    int check{0};

    cout << "Enter a five digit integer: ";
    cin >> number;

    int copy{number};

    while(number > 0) {
        int digit = number % 10;
        check = check * 10 + digit;
        number /= 10;
        counter--;
    }


    cout << "It is ";
    if(copy != check) 
        cout << "not ";

    cout << "a palindrome.";

    return 0;
}