// Program that inputs the size of a square's side, then prints a hollow square
// of that size using asterisks and blanks.

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    cout << "Enter square side length (1 - 20): ";
    int squareSide{};
    cin >> squareSide;

    int row{1};
    while (row <= squareSide)
    {
        int column{1};
        while (column <= squareSide)
        {
            if (row % squareSide <= 1) // first or last row.
            {
                cout << '*';
            }
            else
            {
                cout << (column % squareSide <= 1
                             ? '*'
                             : ' '); // first or last column.
            }
            ++column;
        }

        cout << '\n';

        ++row;
    }

    return 0;
}
