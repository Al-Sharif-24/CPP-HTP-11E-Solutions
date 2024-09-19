// A program that calculates the product of three integers.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{

    int x{0};
    int y{0};
    int z{0};

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    int result{0};
    result = x * y * z;
    cout << "The product is " << result << endl;

    return 0;
}
