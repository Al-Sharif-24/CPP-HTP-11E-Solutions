// program that calculates the factorials of 1 through 20.
#include <format>
#include <iostream>

using namespace std;
int main()
{

    long factorial{1};

    cout << format("{}{:>30}\n", "Number", "Factorial");
    for (int i{1}; i <= 20; ++i)
    {
        factorial *= i;
        cout << format("{:>5d}!{:>30}\n", i, factorial);
    }
    return 0;
}