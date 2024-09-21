// program file for Exercise 3.21

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double radius;

    cout << "Enter the raidus of the circle: ";
    cin >> radius;

    cout << "Diameter of the circle is " << 2 * radius << endl;
    cout << "Circumference of the circle is " << 2 * 3.14159 * radius << endl;
    cout << "Area of the circle is " << radius * radius * 3.14159;

    return 0;
}