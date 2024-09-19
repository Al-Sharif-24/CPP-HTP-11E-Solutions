// fig04_08.cpp
// replaced break statement with structured approach.
#include <iostream>
using namespace std;

int main()
{
    int count;

    for (count = 1; count <= 10 && count != 5; ++count)
    {
        cout << count << " ";
    }
    cout << "\nBroke out of loop at count = " << count << "\n";
}