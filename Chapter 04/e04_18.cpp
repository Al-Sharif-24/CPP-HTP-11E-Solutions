// Program that demonstrates De Morgan's laws.

#include <format>
#include <iostream>

using namespace std;

int main()
{
    // suppose that variables have these value.
    int x{231};
    int y{7};
    int a{87};
    int b{a};
    int g{5};
    int i{-99};
    int j{0};

    cout << format("{:>10}{}{:<10} = {}\n", "!(x < 5)", " && ", "!(y >= 7)",
                   !(x < 5) && !(y >= 7));
    cout << format("{:>10}{}{:<10} = {}\n", "!((x < 5)", " || ", "(y >= 7))",
                   !((x < 5) || (y >= 7)));
    cout << "\n\n";

    cout << format("{:>10}{}{:<10} = {}\n", "!(a == b)", " || ", "!(g != 5)",
                   !(a == b) || !(g != 5));
    cout << format("{:>10}{}{:<10} = {}\n", "!((a == b)", " && ", "(g != 5))",
                   !((a == b) && (g != 5)));
    cout << "\n\n";

    cout << format("{:>10}{}{:<10} = {}\n", "!((x <= 8)", " && ", "(y > 4))",
                   !((x <= 8) && (y > 4)));
    cout << format("{:>10}{}{:<10} = {}\n", "!(x <= 8)", " || ", "!(y > 4)",
                   !(x <= 8) || !(y > 4));
    cout << "\n\n";

    cout << format("{:>10}{}{:<10} = {}\n", "!((i > 4)", " || ", "(j <= 6))",
                   !((i > 4) || (j <= 6)));
    cout << format("{:>10}{}{:<10} = {}\n", "!(i > 4)", " && ", "!(j <= 6)",
                   !(i > 4) && !(j <= 6));
    cout << "\n\n";

    return 0;
}