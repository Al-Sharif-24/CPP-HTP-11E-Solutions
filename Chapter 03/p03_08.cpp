// program file for Exercise 3.8

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int counter{1};

    cout << "N\t10*N\t100*N\t1000*N\n";
    while(counter <= 5) 
        cout << counter << "\t" << counter*10 << "\t" << counter*100 << "\t" << counter++*1000 << "\n";

    return 0;
}