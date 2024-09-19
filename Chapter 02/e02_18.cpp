// Program that reads five integers and prints,
// Then prints the largest and the smallest integers in the group.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter five integers: ";

    int num1{};
    int num2{};
    int num3{};
    int num4{};
    int num5{};

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int smallest{num1};
    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }
    if (num4 < smallest)
    {
        smallest = num4;
    }
    if (num5 < smallest)
    {
        smallest = num5;
    }

    cout << "Smallest in the group is " << smallest << '\n';

    int largest{num1};
    if (num2 > largest)
    {
        largest = num2;
    }
    if (num3 > largest)
    {
        largest = num3;
    }
    if (num4 > largest)
    {
        largest = num4;
    }
    if (num5 > largest)
    {
        largest = num5;
    }

    cout << "Largest in the group is " << largest << '\n';

    return 0;
}