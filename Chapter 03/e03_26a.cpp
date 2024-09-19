// Program that takes takes a four-digit integer and encrypt it.

#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "Enter a four-digit integer: ";
    int message{};
    cin >> message;
    int copy{message};

    int digit1{(copy % 10 + 7) % 10};
    copy /= 10;

    int digit2{(copy % 10 + 7) % 10};
    copy /= 10;

    int digit3{(copy % 10 + 7) % 10};
    copy /= 10;

    int digit4{(copy % 10 + 7) % 10};

    cout << "Encryption of " << message << " is " << digit2 << digit1 << digit4
         << digit3 << '\n';

    return 0;
}