// Program that prints the powers of the integer 2 infinitely.

#include <iostream>

using std::cout;

int main()
{

    int power{1};
    int product{2};

    while (true)
    {
        cout << "2 ^ " << power << " = " << product << "\n";

        ++power;
        product *= 2;
    }

    return 0;
}