#include <iostream>         

using std::cin;
using std::cout;
using std::endl;        

int main()
{
    int x{0};               
    int y{0};                             
    int sum{0};
    int diff{0};    
    int pro{0};
    int quo{0};

    cout << "Enter two integers: ";       
    cin >> x >> y;                     

    sum = x + y;
    diff = x - y;
    pro = x * y;
    quo = x / y;

    cout << "The sum is " << sum << endl;
    cout << "The product is " << diff << endl;     
    cout << "The difference is " << pro << endl;       
    cout << "The quotient is " << quo << endl;    
 
    return 0;
}