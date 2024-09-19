// Program that calculates parking charges

#include <cmath>
#include <format>
#include <iostream>
using namespace std;

double calculateCharges(double hours);

int main()
{

    cout << "Enter the hours of customer #1: ";
    double customer1Hours{};
    cin >> customer1Hours;
    double customer1Charge{calculateCharges(customer1Hours)};

    cout << "Enter the hours of customer #2: ";
    double customer2Hours{};
    cin >> customer2Hours;
    double customer2Charge{calculateCharges(customer2Hours)};

    cout << "Enter the hours of customer #3: ";
    double customer3Hours{};
    cin >> customer3Hours;
    double customer3Charge{calculateCharges(customer3Hours)};

    double totalHours{customer1Hours + customer2Hours + customer3Hours};
    double totalCharge{customer1Charge + customer2Charge + customer3Charge};

    cout << format("{:<10}{:>5}{:>15}\n", "Car", "Hours", "Charge")
         << format("{:<10}{:>5.1f}{:>15.2f}\n", 1, customer1Hours,
                   customer1Charge)
         << format("{:<10}{:>5.1f}{:>15.2f}\n", 2, customer2Hours,
                   customer2Charge)
         << format("{:<10}{:>5.1f}{:>15.2f}\n", 3, customer3Hours,
                   customer3Charge)
         << format("{:<10}{:>5.1f}{:>15.2f}\n", "TOTAL", totalHours,
                   totalCharge);
    return 0;
}

double calculateCharges(double hours)
{
    double charges{20.00};
    if (hours > 3.0)
    {
        charges += 5.00 * ceil(hours - 3.00);
    }
    if (charges > 50.00)
    {
        charges = 50.00;
    }
    return (charges > 50.00 ? 50.00 : charges);
}