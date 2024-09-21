// program file for Exercise 4.18

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int x{34};
    int y{5};
    int a{700};
    int b{67};
    int g{56};
    int i{87};
    int j{54};

    cout << "a) " << endl;
    cout << "!(x < 5) && !(y >= 7) = " << (!(x < 5) && !(y >= 7)) << endl;
    cout << "!((x < 5) || y >= 7) = " << (!((x < 5) || y >= 7)) << endl;

    cout << "b) " << endl;
    cout << "!(a == b) || !(g != 5) = " << (!(a == b) || !(g != 5)) << endl;
    cout << "!((a == b) && !(g != 5)) = " << (!((a == b) && !(g != 5))) << endl;

    cout << "c) " << endl;
    cout << "!((x <= 8) && (y > 4)) = " << (!((x <= 8) && (y > 4))) << endl;
    cout << "!(x <= 8) || !(y > 4) = " << (!(x <= 8) || !(y > 4)) << endl;

    cout << "d) " << endl;
    cout << "!((i > 4) || (j <= 6)) = " << (!((i > 4) || (j <= 6))) << endl;
    cout << "!(i > 4) && !(j <= 6) = " << (!(i > 4) && !(j <= 6)) << endl;

    return 0;
}