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

    cout << x << " is ";
    
    if(y % x != 0)
        cout << "not ";
    
    cout << "a multiple of " << y << endl;
    
    

    return 0;
}