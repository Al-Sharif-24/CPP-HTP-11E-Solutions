// Program that calculates the hypotenuse of a right triangle.

#include <cmath>
#include <format>
#include <iostream>
using namespace std;

double hypotenuse(double side1, double side2);
int main()
{

    double side1{0.0};
    double side2{0.0};

    cout << "Enter side1 (negative to quit): ";
    cin >> side1;
    while (side1 > 0)
    {
        cout << "Enter side2: ";
        cin >> side2;

        cout << format("Hypotenuse is: {:.6f}\n", hypotenuse(side1, side2));

        cout << "Enter side1 (negative to quit): ";
        cin >> side1;
    }

    return 0;
}
inline double hypotenuse(double side1, double side2)
{
    return sqrt(side1 * side1 + side2 * side2);
}