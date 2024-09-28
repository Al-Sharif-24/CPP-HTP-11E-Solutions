// program file for exercise 5.28

#include <boost/multiprecision/cpp_int.hpp>
#include <format>
#include <iostream>

using boost::multiprecision::cpp_int;
using namespace std;

cpp_int factorial(int number); 

int main() {

    for (int counter{0}; counter <= 3; ++counter) {
        cout << format("{:>2}! ", counter) << factorial(counter)<< '\n';
    }  

    // cout << format("\n{:>2}! = ", 20) << factorial(20) << format("\n{:>2}! = ", 30) << factorial(30) << format("\n{:>2}! = ", 40) << factorial(40) << '\n';
}

cpp_int factorial(int number) {
    if (number <= 1) 
        return 1;
    else {
        std::cout << "local variable: " << number << "\tnext recursive call: " << number - 1 << std::endl;

        return number * factorial(number - 1);
    }
} 