// Program that calculates the product of the odd integers from 1 to 15.
#include <format>
#include <iostream>

using namespace std;

int main()
{
    int product{1};
    for (int i{3}; i <= 15; i += 2)
    {
        product *= i;
    }
    cout << format("The Product of the odd integers from 1 to 15 is: {}\n",
                   product);
    return 0;
}