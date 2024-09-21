// program file for Exercise 3.9

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int counter{2};
    int number{0};
    int largest{0};
    int secondLargest{0};

    cout << "Enter a number: ";
    cin >> number;
    largest = number;

    cout << "Enter a number: ";
    cin >> number;

    if(number > largest) {
        secondLargest = largest;
        largest = number;
    } else 
        secondLargest = number;

    while(counter < 10) {
        cout << "Enter a number: ";
        cin >> number;

        if(number > largest) {
            secondLargest = largest;
            largest = number;
        } else if(number > secondLargest) 
            secondLargest = number;
        

        counter++;
    }

    cout << "The largest number is " << largest << endl;
    cout << "The Second largest number is " << secondLargest << endl;


    return 0;
}