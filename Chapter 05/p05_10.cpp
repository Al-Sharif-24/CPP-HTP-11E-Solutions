// program file for Exercise 5.10

#include <iostream>

using namespace std;

bool isMultiple(int x, int y);

int main() {
    int x, y;

    cout << "Enter two number whose multiples are to be checked: ";
    cin >> x >> y;

    cout << std::boolalpha << isMultiple(x, y);

    return 0;
}

bool isMultiple(int x, int y)
{
    return (x % y == 0);
}
