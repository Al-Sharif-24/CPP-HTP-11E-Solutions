// Program that prints a diamond of asterisks

#include <cmath>
#include <iostream>

using namespace std;

int main()
{

    int length{};
    do
    {
        cout << "Enter an odd number in range 1 to 19: ";
        cin >> length;
    } while (length % 2 == 0 || length > 19 || length < 1);

    int middle{(length + 1) / 2};

    for (int x{1}; x <= length; ++x)
    {
        for (int y{1}; y <= length; ++y)
        {
            (x >= abs(middle - y) + 1 && x <= length - abs(middle - y))
                ? cout << '*'
                : cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}