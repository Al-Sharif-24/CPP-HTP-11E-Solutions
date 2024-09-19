// Program that calculates a circle's diameter, circumference and are.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    cout << "Enter circle's radius: ";
    double radius{};
    cin >> radius;

    double pi{3.14159};

    // To make float numbers have 2 digits after floating point.
    cout << std::setprecision(2) << std::fixed;

    cout << "Circle's Diameter is " << radius * 2;
    cout << "\nCircle's Circumference is " << radius * 2 * pi;
    cout << "\nCircle's Area is " << radius * radius * pi << std::endl;

    return 0;
}