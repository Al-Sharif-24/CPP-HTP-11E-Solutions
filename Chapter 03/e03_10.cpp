// Analysis of examination results.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    int passes{0};
    int failures{0};
    int studentCounter{1};

    while (studentCounter <= 10)
    {
        cout << "Enter result (1 = pass, 2 = fail): ";
        int result;
        cin >> result;

        if (result == 1)
        {
            ++passes;
            ++studentCounter;
        }
        else if (result == 2)
        {
            ++failures;
            ++studentCounter;
        }
        else
        {
            cout << "Invalid input\n";
        }
    }

    cout << "Passed: " << passes << "\nFailed: " << failures << '\n';
    if (passes > 8)
    {
        cout << "Bonus to instructor!\n";
    }

    return 0;
}