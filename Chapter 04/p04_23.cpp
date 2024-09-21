// program file for Exercise 4.23

#include <iostream>

using namespace std;

int main() {
    for (int count{1}; count <= 10; ++count) { // loop 10 time
        if (count == 5) {
            count++; 
        }

        cout << count << " ";
    }

    cout << "\nUsed continue to skip printing 5\n";
}