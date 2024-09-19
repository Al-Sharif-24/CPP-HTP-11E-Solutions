// Program that reads 5 numbers in range [1:30] and displays them as charts.
#include <format>
#include <iostream>

using namespace std;

int main()
{

    cout << "Enter an integer from 1 to 30: ";
    int num1{};
    cin >> num1;

    cout << "Enter an integer from 1 to 30: ";
    int num2{};
    cin >> num2;

    cout << "Enter an integer from 1 to 30: ";
    int num3{};
    cin >> num3;

    cout << "Enter an integer from 1 to 30: ";
    int num4{};
    cin >> num4;

    cout << "Enter an integer from 1 to 30: ";
    int num5{};
    cin >> num5;

    // Table header
    cout << format("\n{:<10}{}\n", "Number", "Chart");

    cout << format("\n{:<10d}", num1);
    for (int i{1}; i <= num1; ++i)
    {
        cout << '*';
    }

    cout << format("\n{:<10d}", num2);
    for (int i{1}; i <= num2; ++i)
    {
        cout << '*';
    }

    cout << format("\n{:<10d}", num3);
    for (int i{1}; i <= num3; ++i)
    {
        cout << '*';
    }

    cout << format("\n{:<10d}", num4);
    for (int i{1}; i <= num4; ++i)
    {
        cout << '*';
    }

    cout << format("\n{:<10d}", num5);
    for (int i{1}; i <= num5; ++i)
    {
        cout << '*';
    }
    cout << endl;

    return 0;
}