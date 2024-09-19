// Program that separates an int between 1 and 32767
// and prints it as a series of digits

#include <format>
#include <iostream>
using namespace std;

void separate(int number);

int main()
{
    cout << "Enter an integer between 1 and 32767 (0 to quit): ";
    int number{};
    cin >> number;
    while (number != 0)
    {
        if (number >= 1 && number <= 32767)
        {

            separate(number);
        }
        else
        {
            cout << "Number MUST be between 1 and 32767\n";
        }

        cout << "Enter an integer between 1 and 32767 (0 to quit): ";
        cin >> number;
    }

    return 0;
}

int quotient(int a, int b)
{
    return a / b;
}
int remainder(int a, int b)
{
    return a % b;
}

void separate(int number)
{

    for (int divisor{10'000}; divisor >= 1; divisor /= 10)
    {
        if (divisor <= number) // there is a digit in this position
        {
            cout << format("{:<3d}", remainder(quotient(number, divisor), 10));
        }
    }
    cout << '\n';
}
