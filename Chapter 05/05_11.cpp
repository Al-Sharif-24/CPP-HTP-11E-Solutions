// Program that takes a series of integers and determins if they are even.

#include <format>
#include <iostream>
using namespace std;

bool isEven(int number);
int main()
{

    cout << "Enter a series of integers.\n"
         << "   Type the end-of-file indicator to terminate input:\n"
         << "   On UNIX/Linux/Mac OS X type <ctrl> d then press Enter"
         << "   On Windows type <ctrl> z then press Enter\n";

    int number{};
    while (cin >> number)
    {
        cout << format("{} is {}\n", number, (isEven(number) ? "Even" : "Odd"));
    }
    return 0;
}
bool isEven(int number)
{
    return number % 2 == 0;
}