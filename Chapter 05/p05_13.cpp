// program file for Exercise 5.13

#include <iostream>

using namespace std;

long Seconds(int , int , int);

int main() {
    int hour, min, sec;

    cout << "Enter the hour, minutes and seconds: ";
    cin >> hour >> min >> sec;

    cout << Seconds(hour, min, sec);

    return 0;
}

long Seconds(int hour, int min, int sec) {

    int total = 0;

    while(hour != 12 && hour != 0) {
        total += 60 * 60;
        hour--;
    }

    while(min != 0) {
        total += 60;
        min--;
    }

    while(sec != 0) {
        total++;
        sec--;
    }

    return total;
}
