// program file for Exercise 3.25a

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
using std::cin;
using std::cout;

int main()
{
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    cpp_int factorial = 1;

    while(n > 0) {
        factorial *= n;
        n--;
    }

    cout << factorial;
    return 0;
}