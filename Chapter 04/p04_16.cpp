// program file for Exercise 4.16

#include <iostream>
#include <format>

int main() {
    std::cout << std::format("{:6} {:6} {:6}", "Side 1", "Side 2", "Side 3") << std::endl;

    for(int i = 1; i <= 500; ++i) {
        for(int j = i + 1; j <= 500; ++j) {
            for(int k = j + 1; k <= 500; ++k) {
                if(i * i + j * j == k * k) 
                    std::cout << std::format("{:3} {:3} {:3}", i, j, k) << std::endl;
                
            }
        }
    }

    return 0;
}