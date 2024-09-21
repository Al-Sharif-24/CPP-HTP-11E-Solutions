// program file for Exercise 4.21

#include <iostream>

using namespace std;

int main() {
    int count; 

    for (count = 1; count <= 10 && count != 5; ++count) { 
        cout << count << " ";
    }

    cout << "\nBroke out of loop at count = " << count << "\n";

    return 0;
} 
