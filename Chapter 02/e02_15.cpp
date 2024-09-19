// Program that gets three integers,
// Prints the sum, average, product, smallest and largest of these numbers.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Input three different integers: ";

    int num1{};
    int num2{};
    int num3{};
    cin >> num1 >> num2 >> num3;

    int sum{num1 + num2 + num3};
    cout << "Sum is " << sum << '\n';

    int average{sum / 3};
    cout << "Average is " << average << '\n';

    int product{num1 * num2 * num3};
    cout << "Product is " << product << '\n';

    // Calculating the smallest
    int smallest{num1};
    if (smallest > num2)
    {
        smallest = num2;
    }
    if (smallest > num3)
    {
        smallest = num3;
    }
    cout << "Smallest is " << smallest << '\n';

    // Calculating the largest
    int largest{num1};
    if (largest < num2)
    {
        largest = num2;
    }
    if (largest < num3)
    {
        largest = num3;
    }
    cout << "Largest is " << largest << '\n';

    return 0;
}
