// Program that computes all Pythagorean Triples <= 500.

#include <format>
#include <iostream>

using namespace std;

int main()
{

    int count{};
    cout << format("{}{:>8}{:>13}\n", "Side1", "Side2", "Hypotenuse");
    for (int side1{1}; side1 <= 500; ++side1)
    {
        // start with a side1+1 to remove duplicates
        for (int side2{side1 + 1}; side2 <= 500; ++side2)
        {
            for (int side3{side2 + 1}; side3 <= 500; ++side3)
            {
                if (side1 * side1 + side2 * side2 == side3 * side3)
                {
                    cout << format("{:5d}{:>8d}{:>13d}\n", side1, side2, side3);
                    ++count;
                }
            }
        }
    }
    cout << format("\nNumber of Pythagorean Triples where all sides are no "
                   "greater than 500 is: {}\n",
                   count);

    return 0;
}