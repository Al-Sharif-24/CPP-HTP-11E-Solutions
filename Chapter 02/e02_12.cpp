// Program that asks the user to enter two integers,
// and calculates their sum, product, difference, and quotient.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter two integers: ";

    int num1{};
    int num2{};
    cin >> num1 >> num2;

    int sum{num1 + num2};
    cout << "The sum: " << num1 << " + " << num2 << " = " << sum << '\n';

    int product{num1 * num2};
    cout << "The product: " << num1 << " * " << num2 << " = " << product
         << '\n';

    int difference{num1 - num2};
    cout << "The difference: " << num1 << " - " << num2 << " = " << difference
         << '\n';

    int quotient{num1 % num2};
    cout << "The quotient: " << num1 << " % " << num2 << " = " << quotient
         << '\n';

    return 0;
}
