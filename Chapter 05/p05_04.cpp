// program file for Exercise 5.4

#include <iostream>
#include <cmath>

int roundToInteger(double number);
double roundToTenths(double number);
double roundToHundredths(double number);
double roundToThousandths(double number);

using namespace std;

int main() {
    double n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "The original number is " << n << endl;
    cout << "The number rounded to integer is " << roundToInteger(n) << endl;
    cout << "The number rounded to tenths is " << roundToTenths(n) << endl;
    cout << "The number rounded to hundredths is " << roundToHundredths(n) << endl;
    cout << "The number rounded to thousandths is " << roundToThousandths(n) << endl;

    return 0;
}

int roundToInteger(double number)
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
