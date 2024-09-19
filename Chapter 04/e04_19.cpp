// Program that prints a diamond of asterisks

#include <cmath>
#include <iostream>

using namespace std;

int main()
{

    for (int x{1}; x <= 9; ++x)
    {
        for (int y{1}; y <= 9; ++y)
        {
            (x >= abs(5 - y) + 1 && x <= 9 - abs(5 - y)) ? cout << '*'
                                                         : cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}