// Replacing continue with a structured equivalent
#include <iostream>
using namespace std;

int main()
{
    for (int count{1}; count <= 10; ++count)
    {
        if (count != 5)
        {
            cout << count << " ";
            // skip remaining code in loop body if count is 5
        }
    }

    cout << "\nUsed continue to skip printing 5\n";
}