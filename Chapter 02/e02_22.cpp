// Program that reads a character and,
// then prints the integer equivalent of it.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter a character: ";

    char input{};
    cin >> input;

    int integerEquivalent{static_cast<int>(input)};
    cout << "Integer equivalent is " << integerEquivalent << '\n';

    return 0;
}
