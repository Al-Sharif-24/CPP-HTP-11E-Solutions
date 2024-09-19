// Program that estimates the value of the mathematical constant e.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter the number of terms in the summation (1 - 20): ";
    int terms{};
    cin >> terms;

    long double result{1.0};
    int term{1};
    long long factorial{1};

    while (term < terms)
    {
        factorial *= term;
        result += 1.0 / factorial;
        ++term;
    }
    cout << std::setprecision(10) << std::fixed;
    cout << "Estimation of value of e with " << terms << " terms is " << result
         << '\n';

    return 0;
}