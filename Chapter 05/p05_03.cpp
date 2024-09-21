// program file for Exercise 5.3

#include <iostream>
#include <math.h>

using namespace std;

float roundOff(float);

int main() {
    float num;

    cout << "Enter a number to round (Enter 0 to Stop): "; 
    cin >> num;

    while(num != 0) {
        num = roundOff(num);

        cout << num << endl;

        cout << "Enter a number to round (Enter 0 to Stop): "; 
        cin >> num;
    }

    return 0;
}

float roundOff(float num) {
    return floor(num + 0.5);
}