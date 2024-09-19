// Program that reads nonzero double values and determines and prints whether
// they're they could represent the sides of a triangle.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter nonzero double value of side a: ";
    double sideA{};
    cin >> sideA;

    cout << "Enter nonzero double value of side b: ";
    double sideB{};
    cin >> sideB;

    cout << "Enter nonzero double value of side c: ";
    double sideC{};
    cin >> sideC;

    bool validTriangle{true};

    if (sideA + sideB <= sideC)
    {
        validTriangle = false;
    }
    if (sideA + sideC <= sideB)
    {
        validTriangle = false;
    }
    if (sideB + sideC <= sideA)
    {
        validTriangle = false;
    }

    cout << "The sides " << sideA << ", " << sideB << ", " << sideC;
    cout << (validTriangle ? " Form a triangle\n" : " Does NOT form a triangle")
         << '\n';

    return 0;
}