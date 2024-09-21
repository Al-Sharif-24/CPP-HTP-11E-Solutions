// program to calculate product of three integers

#include <iostream>         // includes the required header files

using std::cin;
using std::cout;
using std::endl;        

int main()
{
    int x{0};               // initialsing x variable to 0
    int y{0};               // initialsing y variable to 0
    int z{0};               // initialsing z variable to 0
    int result{0};          // initialsing result variable to 0

    cout << "Enter three integers: ";       // User prompt
    cin >> x >> y >> z;                     // User input

    result = x * y * z;                             // Arithmetic operation
    cout << "The product is " << result << endl;    // result output

    return 0;
}