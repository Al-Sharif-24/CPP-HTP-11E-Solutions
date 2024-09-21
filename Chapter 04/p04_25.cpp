// program file for Exercise 4.25

#include <boost/multiprecision/cpp_dec_float.hpp>
#include <format>
#include <iostream>
#include "decimalformatter.h"

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

int main() {
    cpp_dec_float_50 principal{"24"};
    
    for(int rate = 5; rate <= 10; ++rate) {
        cpp_dec_float_50 ratepercent = rate;
        ratepercent /= 100;

        cout << endl;
        cout << format("Initial principal: {:7}\n",principal) << format("Interest rate: {:>7}%\n", rate);

        cout << format("{:<20}\n", "Amount on deposit");

        cpp_dec_float_50 amount{0};

        for (int year{1626}; year <= 2023; ++year) {
            amount = principal * pow(1 + ratepercent, year - 1626);
        }
        cout << format("${:>20}\n" , amount);
    }
}