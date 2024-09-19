// Program that uses floor() to round numbers to nearest integer.
#include <cmath>
#include <format>
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter decimal numbers.\n"
         << "   Type the end-of-file indicator to terminate input:\n"
         << "   On UNIX/Linux/Mac OS X type <ctrl> d then press Enter"
         << "   On Windows type <ctrl> z then press Enter\n";
    double number;
    while (cin >> number)
    {
        cout << format("Number: {:.6f} rounded to nearest integer: {:.6f}\n",
                       number, floor(number + 0.5));
    }

    return 0;
}