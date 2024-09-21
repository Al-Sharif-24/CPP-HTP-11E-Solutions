// program file for Exercise 3.27

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using std::cin;
using std::cout;
using std::endl;
using boost::multiprecision::cpp_int;
using boost::multiprecision::pow;
using boost::multiprecision::sqrt;

int main() {
    cpp_int value1{"100000000000000000000000000000"};
    cpp_int value2{"9223372036854775807"};
    int value3{3};

    cout << "INITIAL VALUES\n";
    cout << "cpp_int value1: " << value1 << endl;
    cout << "cpp_int value2: " << value2 << endl;
    cout << "int value3: " << value3 << endl;

    cout << "USE CPP_INT OBJECTS WITH THE +, -, *, / AND % OPERATORS\n";
    cout << "value1 + value2: " << value1 + value2 << endl;
    cout << "value1 - value2: " << value1 - value2 << endl;
    cout << "value1 * value2: " << value1 * value2 << endl;
    cout << "value1 / value2: " << value1 / value2 << endl;
    cout << "value1 % value2: " << value1 % value2 << endl;

    cout << "MULTIPLY A CPP_INT OBJECT BY INT VALUES\n";
    cout << "value1 * value3: " << value1 * value3 << endl;
    cout << "value1 * 17: " << value1 * 17 << endl;

    cout << "USING BOOST MULTIPRECISION LIBRARY FUNCTIONS POW AND SQRT\n";
    cout << "value1 squared: " << pow(value1, 2) << endl;

    cpp_int value4{"1000000000000000000000000000000000000"};
    cout << "square root of value4: " << sqrt(value4) << endl;

    return 0;
}