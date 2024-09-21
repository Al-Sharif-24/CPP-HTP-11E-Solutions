// Program file for Exercise 3.3

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double miles{0};
    double gallon{0};
    double totalmiles{0};
    double totalgallons{0};
    double avgMPG{0};

    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;

    while(miles > 0) {
        cout << "Enter gallons used: ";
        cin >> gallon;

        double MPG = miles/gallon;
        cout << "MPG this trip: " << MPG << endl;

        totalmiles += miles;
        totalgallons += gallon;
        avgMPG = totalmiles / totalgallons;

        cout << "Total MPG: " << avgMPG << endl;

        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles;
    }

    return 0;
}