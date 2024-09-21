// progrma file for Exercise 3.23

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    double s1, s2, s3;

    cout << "Enter three non zero sides of a triangle: ";
    cin >> s1 >> s2 >> s3;

    bool possible = true;

    if(s1 + s2 <= s3) {
        possible = false;
        break;
    }

    if(s2 + s3 <= s1) {
        possible = false;
        break;
    }

    if(s1 + s3 <= s2) {
        possible = false;
        break;
    }

    cout << "A triangle can"
    if(!possible)
        cout << "not";

    cout << " be formed";

    return 0;
}