// Program that uses a function to determine the minimum of 3 floating numbers.
#include <format>
#include <iostream>
using namespace std;

double minimum(double num1, double num2, double num3);
int main()
{

    double num1{0.0};
    double num2{0.0};
    double num3{0.0};
    cout << "Enter 3 floating-point numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << format("Minimum is: {:.4f}\n", minimum(num1, num2, num3));

    return 0;
}
double minimum(double num1, double num2, double num3)
{
    double minimumValue{num1};
    if (minimumValue > num2)
    {
        minimumValue = num2;
    }
    if (minimumValue > num3)
    {
        minimumValue = num3;
    }
    return minimumValue;
}
