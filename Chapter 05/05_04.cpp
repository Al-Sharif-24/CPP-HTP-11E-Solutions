// Program uses floor function to round number
// to nearest integer, tenths, hundredths and thousandths

#include <cmath>
#include <format>
#include <iostream>
using namespace std;

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);

int main()
{

    cout << "Enter decimal numbers.\n"
         << "   Type the end-of-file indicator to terminate input:\n"
         << "   On UNIX/Linux/Mac OS X type <ctrl> d then press Enter"
         << "   On Windows type <ctrl> z then press Enter\n";
    double number;
    while (cin >> number)
    {
        cout << format("Number:                          {:.6f}\n", number);
        cout << format("Rounded to Integer:              {:.6f}\n",
                       roundToInteger(number));
        cout << format("Rounded to Tenths Position:      {:.6f}\n",
                       roundToTenths(number));
        cout << format("Rounded to Hundredths Position:  {:.6f}\n",
                       roundToHundredths(number));
        cout << format("Rounded to Thousandths Position: {:.6f}\n",
                       roundToThousandths(number));
    }
    return 0;
}

double roundToInteger(double number)
{
    return floor(number + 0.5);
}
double roundToTenths(double number)
{
    return floor(number * 10 + 0.5) / 10;
}
double roundToHundredths(double number)
{
    return floor(number * 100 + 0.5) / 100;
}
double roundToThousandths(double number)
{
    return floor(number * 1000 + 0.5) / 1000;
}