// A program that finds the two largest numbers among 10 integers.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter an integer: ";
    int number{};
    cin >> number;
    int largest{number};

    cout << "Enter an integer: ";
    cin >> number;
    int secondLargest;
    if (number > largest)
    {
        secondLargest = largest;
        largest = number;
    }
    else
    {
        secondLargest = number;
    }

    int counter{3};
    while (counter <= 10)
    {
        cout << "Enter an integer: ";
        cin >> number;

        if (number > largest)
        {
            secondLargest = largest;
            largest = number;
        }
        else if (number > secondLargest)
        {
            secondLargest = number;
        }

        ++counter;
    }

    cout << "Largest number is " << largest << "\nSecond largest is "
         << secondLargest;

    return 0;
}