#include <iostream>         

using std::cin;
using std::cout;
using std::endl;        

int main()
{
    int x{0};               
    int y{0};                             

    cout << "Enter two integers: ";       
    cin >> x >> y;                     

    if(x == y)
        std::cout << "These numbers are equal." << endl;
    else 
        std::cout << (x > y? x: y) << " is larger." << std::endl;
 
    return 0;
}