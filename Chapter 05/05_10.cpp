// Program that takes a series of pairs and determines if they are multiples.

#include <format>
#include <iostream>
using namespace std;

bool isMultiple(int a, int b);

int main()
{

    cout << "Enter first number (0 to exit): ";
    int firstNum{};
    cin >> firstNum;
    while (firstNum > 0)
    {
        cout << "Enter second number: ";
        int secondNum{};
        cin >> secondNum;

        cout << format("{} is{}a multiple of {}\n", secondNum,
                       (isMultiple(firstNum, secondNum) ? " " : " NOT "),
                       firstNum);

        cout << "\nEnter first number (0 to exit): ";
        cin >> firstNum;
    }

    return 0;
}

bool isMultiple(int a, int b)
{
    return b % a == 0;
}