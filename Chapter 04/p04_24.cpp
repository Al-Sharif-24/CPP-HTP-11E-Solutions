// program file for Exercise 4.24

#include <iostream>
#include <format>
#include <string>

using std::format;
using std::cout;

std::string switchDay(int i);

int main() {
    for(int i = 12; i > 0; --i) {
        cout << format("On the {} day of Christmas my true love sent to me\n", switchDay(i));

        switch(i) {
            case 1: cout << "Twelve drummers drumming,\n";
            case 2: cout << "eleven pipers piping,\n";
            case 3: cout << "ten lords a-leaping,\n";
            case 4: cout << "nine ladies dancing,\n";
            case 5: cout << "eight maids a-milking,\n";
            case 6: cout << "seven swans a-swimming,\n";
            case 7: cout << "six geese a-laying,\n";
            case 8: cout << "five gold rings,\n";
            case 9: cout << "four calling birds,\n";
            case 10: cout << "Three French hens,\n";
            case 11: cout << "Two turtle doves,\n";
            case 12: cout << "A partridge in a pear tree\n";
        }
    }


    return 0;
}

std::string switchDay(int i) {
    switch(i) {
        case 12: return "first";
        case 11: return "second";
        case 10: return "third";
        case 9: return "fourth";
        case 8: return "fifth";
        case 7: return "sixth";
        case 6: return "seventh";
        case 5: return "eighth";
        case 4: return "ninth";
        case 3: return "tenth";
        case 2: return "eleventh";
        case 1: return "twelveth";
    }

    return "error";
}