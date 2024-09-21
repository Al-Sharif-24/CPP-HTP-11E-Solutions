// program file for Exercise 5.21

#include <iostream>
#include <random>

bool flip();

std::random_device rd;
std::default_random_engine rengine{rd()};

std::uniform_int_distribution distro{0, 1};

int main() {

    int headCount = 0;
    int tailCount = 0;

    for(int i = 0; i < 100; ++i) {
        if(!flip()) 
            tailCount++;
        else
            headCount++;
    }

    std::cout << "The total number of heads are " << headCount << std::endl;
    std::cout << "The total number of tails are " << tailCount << std::endl;

    return 0;
}

bool flip() {
    int n = distro(rengine);

    if(n == 0) 
        std::cout << "Tail" << std::endl;
    else
        std::cout << "Head" << std::endl;

    return n;
}