// program file for Exercise 5.2

#include <iostream>
#include <format>

using namespace std;

double calculateCharges(double hours);

int main() {
    float car1{0};
    float car2{0};
    float car3{0};

    cout << "Enter the number of hours Car 1 was parked for: ";
    cin >> car1;

    cout << "Enter the number of hours Car 2 was parked for: ";
    cin >> car2;

    cout << "Enter the number of hours Car 3 was parked for: ";
    cin >> car3;


    cout << format("{:<6}{:<6}{:<6}", "Car", "Hours", "Charge") << endl;

    cout << format("{:<6}{:<6}{:<6}", "Car1", car1, calculateCharges(car1)) << endl;
    cout << format("{:<6}{:<6}{:<6}", "Car2", car2, calculateCharges(car2)) << endl;
    cout << format("{:<6}{:<6}{:<6}", "Car3", car3, calculateCharges(car3)) << endl;

    float totalCharges = calculateCharges(car1) + calculateCharges(car2) + calculateCharges(car3);
    double totalHours = car1 + car2 + car3; 
    
    cout << format("{:<6}{:<6}{:<6}", "TOTAL", totalHours, totalCharges) << endl;

    return 0;
}

double calculateCharges(double hours) {
    if(hours < 3) 
        return 20.0;
    else if(hours > 9)
        return 50.0;

    double amount{20};
    hours -= 3; 

    amount += (5 * hours);
    return amount;
}