// Program that reads arbitrary number of trips miles and gallons,
// and prints the miles per gallon and total miles per gallon.

#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;

int main()
{

    double totalMiles{0};
    double totalGallons{0};

    cout << "Enter miles driven (-1 to quit): ";
    double tripMiles{};
    cin >> tripMiles;

    cout << std::fixed;

    while (tripMiles != -1)
    {
        cout << "Enter gallons used: ";
        double tripGallons{};
        cin >> tripGallons;

        if (tripGallons != 0)
        {
            double mpg{tripMiles / tripGallons};
            cout << "MPG this trip: " << mpg << '\n';
        }

        totalMiles += tripMiles;
        totalGallons += tripGallons;
        if (totalGallons != 0)
        {
            cout << "Total MPG: " << totalMiles / totalGallons << "\n\n";
        }

        cout << "Enter miles driven (-1 to quit): ";
        cin >> tripMiles;
    }

    return 0;
}