#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int v{0};
    int w{0};
    int x{0};
    int y{0};
    int z{0};
    int largest{0};
    int smallest{0};


    cout << "Enter five integers: " << endl;
    cin >> v >> w >> x >> y >> z;

    largest = smallest = v;
    
    if(w > largest) 
        largest = w;
    else if (w < smallest)
        smallest = w;

    if(x > largest) 
        largest = x;
    else if (x < smallest)
        smallest = x;

    if(y > largest) 
        largest = y;
    else if (y < smallest)
        smallest = y;

    if(z > largest) 
        largest = z;
    else if (z < smallest)
        smallest = z;

    cout << "The largest is " << largest << endl;
    cout << "The smallest is " << smallest << endl;


    return 0;
}