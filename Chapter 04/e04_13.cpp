// Program that calculates the total retail value of all products.

#include <format>
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter product number and quantity sold as a pair.\n"
         << "Type the end-of-file indicator to terminate input:\n"
         << "   On UNIX/Linux/macOS type <Ctrl> d then press Enter\n"
         << "   On Windows type <Ctrl> z then press Enter\n";
    int productNumber{};
    int quantitySold{};
    int p1Quantity{};
    int p2Quantity{};
    int p3Quantity{};
    int p4Quantity{};
    int p5Quantity{};

    while (cin >> productNumber >> quantitySold)
    {
        switch (productNumber)
        {
        case 1:
            p1Quantity += quantitySold;
            break;
        case 2:
            p2Quantity += quantitySold;
            break;
        case 3:
            p3Quantity += quantitySold;
            break;
        case 4:
            p4Quantity += quantitySold;
            break;
        case 5:
            p5Quantity += quantitySold;
            break;
        default:
            cout << "Invalid product number. Please try again.\n";
            continue;
        }
    }

    double p1Price{2.98};
    double p2Price{4.50};
    double p3Price{9.98};
    double p4Price{4.49};
    double p5Price{6.87};

    // Report
    cout << "\n\n-------------------------------------\n"
         << format("{}{:>8}{:>11}{:>8}\n", "Product", "Price", "Quantity",
                   "Total")
         << format("{:>7d}{:>8.2f}{:>11}{:>8.2f}\n", 1, p1Price, p1Quantity,
                   p1Price * p1Quantity)
         << format("{:>7d}{:>8.2f}{:>11}{:>8.2f}\n", 2, p2Price, p2Quantity,
                   p2Price * p2Quantity)
         << format("{:>7d}{:>8.2f}{:>11}{:>8.2f}\n", 3, p3Price, p3Quantity,
                   p3Price * p3Quantity)
         << format("{:>7d}{:>8.2f}{:>11}{:>8.2f}\n", 4, p4Price, p4Quantity,
                   p4Price * p4Quantity)
         << format("{:>7d}{:>8.2f}{:>11}{:>8.2f}\n", 5, p5Price, p5Quantity,
                   p5Price * p5Quantity);

    double total{p1Price * p1Quantity + p2Price * p2Quantity +
                 p3Price * p3Quantity + p4Price * p4Quantity +
                 p5Price * p5Quantity};
    cout << "-------------------------------------\n"
         << format("{:>34.2f}\n", total);
    return 0;
}