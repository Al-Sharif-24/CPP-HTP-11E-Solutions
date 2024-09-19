// Program that prints Pi with different accuracies using infinite series.

#include <format>
#include <iostream>

using namespace std;

int main()
{

    long double pi{};
    int accuracy{200'000};

    cout << format("Accuracy set at: {}", accuracy);
    cout << format("{:<8}{}", "term", "pi");

    int termsForTarget{0};
    int denominator{1};
    int sign{1};

    for (int term{1}; term <= accuracy; ++term, sign *= -1, denominator += 2)
    {
        pi += sign * 4.0 / denominator;

        if (termsForTarget == 0 && (pi > 3.14159 && pi < 3.1416))
        {
            termsForTarget = term;
        }
        cout << format("{:<8d}{:.8f}\n", term, pi);
    }
    cout << format("You have to use {} terms before you get a value that "
                   "begins with 3.14159\n",
                   termsForTarget);

    return 0;
}