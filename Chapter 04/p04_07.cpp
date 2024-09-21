// program file for Exercsie 4.7

#include <iostream>
#include <climits>
#include <format>

int main()
{
    int count;

    std::cout << "Enter the number of inputs: ";
    std::cin >> count;

    int min = INT_MAX;
    for(int i = 0; i < count; ++i) {
        int n;

        std::cout << "Enter a number: ";
        std::cin >> n;

        if(min > n)
            min = n;
    }

    std::cout << std::format("The smallest number among the inputs is {}", min);

    return 0;
}