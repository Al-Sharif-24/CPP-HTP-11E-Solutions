// program file for Exercise 4.10

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <format>
#include <iostream>
#include "decimalformatter.h"

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

int main() {
    cpp_dec_float_50 principal{"1000"};
    
    for(int rate = 5; rate <= 10; ++rate) {
        cpp_dec_float_50 ratepercent = rate;
        ratepercent /= 100;

        cout << format("Initial principal: {:7}\n",principal) << format("Interest rate: {:>7}%\n\n", rate);

        cout << format("{}{:>20}\n", "Year", "Amount on deposit");

        for (int year{1}; year <= 10; ++year) {
            cpp_dec_float_50 amount{principal * pow(1 + ratepercent, year)};
            cout << format("{:>4}{:>20}\n", year, amount);
        }
    }
}