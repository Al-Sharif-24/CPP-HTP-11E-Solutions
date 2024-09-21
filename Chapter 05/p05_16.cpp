// program file for Exercise 5.16

#include <iostream>

bool isPerfect(int);

int main() {

    for(int i = 1; i <= 1000; ++i) {
        if(isPerfect(i)) {
            std::cout << i << " is a Perfect number" << std::endl;

            std::cout << "It's divisor are ";

            for(int j = 1; j <= i/2; ++j) 
                if(i % j == 0)
                    std::cout << j << " ";

            std::cout << std::endl;
        }
    }

    return 0;
}

bool isPerfect(int n) {
    int sum = 0;

    for(int i = 1; i <= n/2; ++i) {
        if(n % i == 0) 
            sum += i;
    }

    if(sum == n)
        return true;

    return false;
}