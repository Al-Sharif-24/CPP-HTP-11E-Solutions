// Program that reads a circle's radius, and prints circle's diameter,
// circumference and area.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter the circle's radius as an integer: ";

    int radius{};
    cin >> radius;

    cout << "Diameter is " << radius * 2 << '\n';
    cout << "circumference is " << radius * 2 * 3.14159 << '\n';
    cout << "Area is " << radius * radius * 3.14159 << '\n';

    return 0;
}
