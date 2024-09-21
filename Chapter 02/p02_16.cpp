#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() 
{
    int radius{0};

    cout << "Enter the radius: " << endl;
    cin >> radius;

    cout << "Diameter of a circle is 2 * radius\n2 * " << radius << " = " << 2 * radius << endl;
    cout << "Circumference of a circle is 2 * π * r\n 2 * π * " << radius << " = " << 2 * 3.14159 * radius << endl;
    cout << "Area of a circle is π * r * r\n π * " << radius << " * " << radius << " = " << 3.14159 * radius * radius << endl;
 

    return 0;
}