// program file for Exercise 5.15

#include <iostream>

using namespace std;

double Minimum(double a, double b, double c);

int main() {
    double a, b, c;

    cout << "Enter a three double-precision, floating point number: ";
    cin >> a >> b >> c;

    std::cout << Minimum(a,b,c);

    return 0;
}

double Minimum(double a, double b, double c)
{
    if(a < b) {
        if(a < c) 
            return a;
        else
            return c;
    } else {
        if(b < c) 
            return b;
        else
            return c;
    }
}
