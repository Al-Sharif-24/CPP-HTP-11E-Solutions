// program file for Exercise 5.9

#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double side1, double side2);

int main() {
    cout << "Triangle1 has side1 as 3 and side2 as 4, its hypotenuse is " << hypotenuse(3, 4) << endl;
    cout << "Triangle1 has side1 as 5 and side2 as 12, its hypotenuse is " << hypotenuse(5, 12) << endl;
    cout << "Triangle1 has side1 as 8 and side2 as 15, its hypotenuse is " << hypotenuse(8, 15) << endl;

    return 0;
}

double hypotenuse(double side1, double side2)
{
    return sqrt(side1 * side1 + side2 * side2); 
}
