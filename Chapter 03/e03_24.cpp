// Program that reads three nonzero integers and determines and prints whether
// they're the sides of a right triangle.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter a nonzero integer side a: ";
    int sideA{};
    cin >> sideA;

    cout << "Enter a nonzero integer side b: ";
    int sideB{};
    cin >> sideB;

    cout << "Enter a nonzero integer side c: ";
    int sideC{};
    cin >> sideC;

    bool validRightTriangle{false};

    if (sideA * sideA + sideB * sideB == sideC * sideC)
    {
        validRightTriangle = true;
    }
    if (sideA * sideA + sideC * sideC == sideB * sideB)
    {
        validRightTriangle = true;
    }
    if (sideB * sideB + sideC * sideC == sideA * sideA)
    {
        validRightTriangle = true;
    }

    cout << "The sides " << sideA << ", " << sideB << ", " << sideC;
    cout << (validRightTriangle ? " Forms a right triangle"
                                : " does NOT form a right triangle")
         << "\n";

    return 0;
}
