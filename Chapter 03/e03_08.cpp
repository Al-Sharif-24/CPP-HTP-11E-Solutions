// Program that prints a table with multiples of 10.

#include <iostream>

using std::cout;

int main()
{

    cout << "N" << "\t10*N" << "\t100*N" << "\t1000*N\n";

    int counter{1};
    while (counter <= 5)
    {
        cout << '\n'
             << counter << '\t' << counter * 10 << '\t' << counter * 100 << '\t'
             << counter * 1000;

        ++counter;
    }

    return 0;
}