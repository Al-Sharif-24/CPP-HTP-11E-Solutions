// Program that takes 2 time (hours, minutes, seconds) both of which are within
// one 12-hour cycle of the clock and returns number of seconds between them.

#include <format>
#include <iostream>
using namespace std;

int secondsFromStruck(int hours, int minutes, int seconds);
int inputIntegerInRange(int start, int end, const string &prompt);

int main()
{
    int time1Seconds{};
    int time2Seconds{};

    cout << "Enter two times within one 12-hour cycle of the clock\n";
    for (int time{1}; time <= 2; ++time)
    {
        int hours{inputIntegerInRange(0, 11, "Hours")};
        int minutes{inputIntegerInRange(0, 59, "Minutes")};
        int seconds{inputIntegerInRange(0, 59, "Seconds")};

        int totalSeconds{secondsFromStruck(hours, minutes, seconds)};
        (time == 1 ? time1Seconds = totalSeconds : time2Seconds = totalSeconds);
    }

    cout << abs(time1Seconds - time2Seconds) << '\n';

    return 0;
}

int secondsFromStruck(int hours, int minutes, int seconds)
{
    return hours * 3600 + minutes * 60 + seconds;
    return 0;
}

int inputIntegerInRange(int start, int end, const string &prompt)
{
    int x;
    do
    {
        cout << format("Enter {} ({} - {}): ", prompt, start, end);
        cin >> x;
    } while (x < start || end < x);
    return x;
}