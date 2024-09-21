#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "integer\tsquare\tcube\n";

    for(int i = 0; i <= 10; i++) {
        int square{i * i};
        int cube{i * i * i};

        cout << i << "\t" << square << "\t" << cube << "\n";
    }

    return 0;
}