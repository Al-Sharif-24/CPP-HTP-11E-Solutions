// program file for Exercise 5.17

#include <iostream>

bool isPrime(int n);

int main() {
    for(int i = 2; i <= 10'000; ++i) {
        if(isPrime(i))
            std::cout << i << " ";
    }

    return 0;
}

bool isPrime(int n) {
    for(int i = 2; i*i < n; ++i) {
        if(n % i == 0)
            return false;
    }

    return true;
}