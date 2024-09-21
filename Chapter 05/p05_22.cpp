// program file for Exercise 5.22

#include <iostream>
#include <random>

using namespace std;

int main() {
    std::random_device rd;
    std::default_random_engine rengine{rd()};

    std::uniform_int_distribution distro{1, 1000};

    char input;

    do {
        int n = distro(rengine);
        int guess;

        cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess." << endl;
        do {
            cin >> guess;

            if(guess != n) {
                if(guess < n) 
                    cout << "Too low. Try again." << endl;
                else 
                    cout << "Too high. Try again." << endl;
            } else {
                break;
            }
        } while(true);

        char input;

        cout << "Excellent! You guessed the number!\nWould you like to play again (y or n)?";
        cin >> input;
    } while(input == 'Y' || input == 'y');

    return 0;
}