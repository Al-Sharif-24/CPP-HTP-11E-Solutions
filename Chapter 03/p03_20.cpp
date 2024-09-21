// program file for Exercise 3.20

#include <iostream>

using std::cout;

int main()
{
    int number{2};

    while(true) {
        cout << number << " ";
        number *= 2;
    }

    return 0;
}