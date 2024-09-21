// program file for Exercise 4.9

#include <iostream>
#include <format>

int main()
{
    long fact{1};

    for(int i = 1; i <= 20; ++i) {
        fact *= i;

        std::cout << std::format("{:2d}!{:15d}",i,fact) << std::endl;
    }

    return 0;
}