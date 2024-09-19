// Program that reads a nonnegative integer and computes and prints its
// factorial.

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using boost::multiprecision::cpp_int;
using std::cin;
using std::cout;

int main()
{

    cout << "Enter a nonnegative integer: ";
    int n{};
    cin >> n;
    cout << n << "! is ";

    cpp_int factorial{1};

    while (n > 0)
    {
        factorial *= n;
        --n;
    }

    cout << factorial;

    return 0;
}