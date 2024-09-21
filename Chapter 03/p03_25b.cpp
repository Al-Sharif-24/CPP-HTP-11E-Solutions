// program file 3for Exercise.25b

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    double result = 1;
    double factorial = 1;
    int i = 1;

    while(i < n) {
        factorial *= i++;

        result += 1/factorial;
    }

    cout << result;
    return 0;
}