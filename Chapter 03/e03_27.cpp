// Program that reads a nonnegative integer and computes and prints its
// factorial.

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using boost::multiprecision::cpp_int;
using boost::multiprecision::pow;
using boost::multiprecision::sqrt;
using std::cin;
using std::cout;

int main()
{
    const cpp_int value1{"100000000000000000000000000000"};
    const cpp_int value2{9223372036854775807LL};
    const int value3{3};
    const cpp_int value4{"1000000000000000000000000000000000000"};

    cout << "INITIAL VALES"
         << "\ncpp_int value1: " << value1 << "\ncpp_int value2: " << value2
         << "\n    int value3: " << value3;

    cout << "\n\nUSE CPP_INT OBJECTS WITH THE +, -, *, / AND \% OPERATORS"
         << "\nvalue1 + value2: " << value1 + value2
         << "\nvalue1 - value2: " << value1 - value2
         << "\nvalue1 * value2: " << value1 * value2
         << "\nvalue1 / value2: " << value1 / value2
         << "\nvalue1 \% value2: " << value1 % value2;

    cout << "\n\nMULTIPLY A CPP_INT OBJECT BY INT VALUES"
         << "\nvalue1 * value3: " << value1 * value3
         << "\n    value1 * 17: " << value1 * 17;

    cout << "\n\nUSING BOOST MULTIPRECISION LIBRARY FUNCTIONS PW AND SQRT"
         << "\nvalue1 squared: " << pow(value1, 2)
         << "\nsquare root of value4: " << sqrt(value4) << "\n";

    return 0;
}