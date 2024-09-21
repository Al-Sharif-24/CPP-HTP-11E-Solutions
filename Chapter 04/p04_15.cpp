// program file for Exercise 4.15

#include <iostream>
#include <format>

using std::cout;
using std::cin;
using std::endl;
using std::format;

int main()
{
    int accuracy{20000};

    cout << format("Accuracy set: {}", accuracy) << endl;

    cout << format("{:10} {:1.8}", "term", "pi") << endl;

    double pi = 0;
    int i = 1;
    double term = 1;

    while (true) {
        if(i % 2 == 0) 
            pi -= 4/term;
        else
            pi += 4/term;

        cout << format("{:<10} {:1.8}", i, pi) << endl;

        if(pi > 3.14159 && pi < 3.1416) {
            break;
        }

        ++i;
        term += 2;
    }

    cout << format("It took {} terms", i);

    return 0;
}