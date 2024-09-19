// Modified Compound-Interest program for interest rates (5:10)%
#include "decimalformatter.h"
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <format>
#include <iostream>

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

int main()
{
    cpp_dec_float_50 principal{1000};
    for (int ratePercent{5}; ratePercent <= 10; ++ratePercent)
    {
        cpp_dec_float_50 rate{ratePercent};
        rate = rate / 100;

        cout << format("Initial principal: {:>7}\n", principal)
             << format("    Interest rate: {:>7}\n\n", rate);

        cout << format("{}{:>20}\n", "Year", "Amount on deposit");

        for (int year{1}; year <= 10; ++year)
        {
            cpp_dec_float_50 amount{principal * pow(1 + rate, year)};
            cout << format("{:>4}{:>20}\n", year, amount);
        }
    }
}