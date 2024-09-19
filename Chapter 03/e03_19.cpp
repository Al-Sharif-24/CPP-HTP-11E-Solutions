// Program that displays checkerboard pattern of asterisks

#include <iostream>

using std::cout;

int main()
{

    int row{1};
    while (row <= 8)
    {

        if (row % 2 == 0)
        {
            cout << ' ';
        }

        int column{1};
        while (column <= 8)
        {
            cout << "* ";
            ++column;
        }

        cout << "\n";
        ++row;
    }

    return 0;
}