#include <iostream>         

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int x{0};               
    int y{0};
    int z{0};                             
    int sum{0};
    int avg{0};    
    int pro{0};
    int small{0};
    int large{0};


    cout << "Input three different integers: ";       
    cin >> x >> y >> z;                     

    sum = x + y + z;
    avg = sum / 3;
    pro = x * y * z;

    if(x > y) {
        if(x > z) {
            large = x;
            if(y > z)
                small = z;
            else
                small = y;
        } else {
            large = z;
            if(x > y)
                small = y;
            else
                small = z;
        }
    } else {
        if(y > z) {
            large = y;
            if(x > z)
                small = z;
            else
                small = x;
        }
        else {
            large = z;
            if(x > y)
                small = y;
            else
                small = z;
        }
    }

    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;     
    cout << "Product is " << pro << endl;
    cout << "Smallest is " << small << endl;
    cout << "Largest is " <<large << endl;    

    return 0;
}