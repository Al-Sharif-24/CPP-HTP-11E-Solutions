// progrma file for Exercise 3.24

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    double s1, s2, s3;

    cout << "Enter three non zero sides of a right triangle: ";
    cin >> s1 >> s2 >> s3;

    bool possible = false;

    if(s1 * s1 + s2 * s2 == s3 * s3)
        possible = true;

    if(s1 * s1 + s3 * s3 == s1 * s1)
        possible = true;

    if(s1 * s1 + s3 * s3 == s2 * s2)
        possible = true;

    cout << "A right triangle can"
    if(!possible)
        cout << "not";

    cout << " be formed";

    return 0;
}