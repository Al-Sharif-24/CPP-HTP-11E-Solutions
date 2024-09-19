// Print four separate triangles of asterisks side by side.

#include <format>
#include <iostream>

using namespace std;

int main()
{
    for (int row{1}; row <= 10; ++row)
    {

        for (char pattern{'a'}; pattern <= 'd'; ++pattern)
        {
            int end{};

            switch (pattern)
            {
            case 'a':
                end = row;
                break;
            case 'b':
                end = 10 - row + 1;
                break;
            case 'c':
                end = row - 1;
                break;
            case 'd':
                end = 10 - row;
                break;
            }

            for (int col{1}; col <= end; ++col)
            {
                cout << (pattern >= 'c' ? ' ' : '*');
            }
            for (int col{1}; col <= 10 - end; ++col)
            {
                cout << (pattern >= 'c' ? '*' : ' ');
            }
            cout << "     ";
        }

        cout << '\n';
    }
    return 0;
}