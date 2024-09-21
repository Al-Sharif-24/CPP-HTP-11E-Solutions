// program file for Execise 5.11

#include <iostream>

using namespace std;

bool isEven(int number);

int main() {
    int num;

    while(cin >> num) {
        cout << std::boolalpha << isEven(num) << endl;
    };

    return 0;
}

bool isEven(int number)
{
    return (number % 2 == 0);
}
