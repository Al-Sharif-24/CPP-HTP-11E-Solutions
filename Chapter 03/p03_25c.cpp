// program file for Exercise 3.25c

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;
    int x;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Enter the value for x: ";
    cin >> x;

    double result = 1;
    double factorial = 1;
    int i = 1;
    int power = 1;

    while(i <= n) {
        factorial *= i;
        power *= x;

        result += (double)power / factorial;
        i++;
    }

    cout << (double)result;
    return 0;
}