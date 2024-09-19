// Program that displays four triangle patterns of asterisks.
#include <format>
#include <iostream>

using namespace std;

int main()
{

    cout << "Patter (a):\n";
    for (int row{1}; row <= 10; ++row)
    {
        for (int col{1}; col <= row; ++col)
        {
            cout << '*';
        }
        cout << '\n';
    }

    cout << "\n\nPatter (b):\n";
    for (int row{10}; row >= 1; --row)
    {
        for (int col{1}; col <= row; ++col)
        {
            cout << '*';
        }
        cout << '\n';
    }

    cout << "\n\nPatter (c):\n";
    for (int row{10}; row >= 1; --row)
    {
        for (int col{1}; col <= 10 - row; ++col)
        {
            cout << ' ';
        }
        for (int col{1}; col <= row; ++col)
        {
            cout << '*';
        }
        cout << '\n';
    }

    cout << "\n\nPatter (d):\n";
    for (int row{1}; row <= 10; ++row)
    {
        for (int col{1}; col <= 10 - row; ++col)
        {
            cout << ' ';
        }
        for (int col{1}; col <= row; ++col)
        {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}