// program file for Exercise 4.8

#include <iostream>
#include <format>

int main()
{
    int product = 1;
    for(int i = 1; i <= 15; i = i + 2) {
        product *= i;
    }

    std::cout << std::format("{}",product) << std::endl;

    return 0;
}