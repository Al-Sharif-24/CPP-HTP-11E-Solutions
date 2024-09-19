// Program that prints the number 1 to 4 on the same line with several ways.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Using one stream insertion operator.\n";
    cout << "1 2 3 4\n";
    cout << "*********************************\n";

    cout << "Using four stream insertion operator.\n";
    cout << "1" << " 2" << " 3" << " 4\n";
    cout << "*********************************\n";

    cout << "Using four statements\n";
    cout << 1;
    cout << " " << 2;
    cout << " " << 3;
    cout << " " << 4 << '\n';

    return 0;
}