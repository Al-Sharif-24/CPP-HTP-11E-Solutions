// Program that computes the value of e^x by using formula.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter the value of x: ";
    int x{};
    cin >> x;

    cout << "Enter the number of terms in the summations: ";
    int terms{};
    cin >> terms;

    int term{1};
    long double result{1.0};
    long long numerator{1};
    long long denominator{1};
    while (term < terms)
    {
        // Calculating the numerator which is x^term
        numerator *= x;

        // Calculating the denominator which is term!
        denominator *= term;

        result += static_cast<long double>(numerator) / denominator;
        ++term;
    }

    cout << std::setprecision(10) << std::fixed;
    cout << "e ^ " << x << " with " << terms << " terms " << " = " << result
         << '\n';

    return 0;
}