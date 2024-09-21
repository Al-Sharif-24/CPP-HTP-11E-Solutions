#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x{0};
    int y{0};

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << x << " is " << (x % 2 == 0?"even" : "odd") << endl;
    cout << y << " is " << (y % 2 == 1?"odd" : "even") << endl;
    

    return 0;
}