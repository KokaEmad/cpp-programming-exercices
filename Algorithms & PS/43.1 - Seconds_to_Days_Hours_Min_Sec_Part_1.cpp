
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int SecondsPerDays = 24 * 60 * 60;
    int SecondsPerHours = 60 * 60;
    int SecondsPerMinutes = 60;

    int TotalSeconds = 0;
    cout << "please enter TotalSeconds : " << endl;

    cin >> TotalSeconds;

    int days = TotalSeconds / SecondsPerDays;
    int remainder = TotalSeconds % SecondsPerDays;

    int hours = remainder / SecondsPerHours;
    remainder = remainder % SecondsPerHours;

    int minutes = remainder / SecondsPerMinutes;
    remainder = remainder % SecondsPerMinutes;

    int seconds = remainder;

    cout << round(days) << ":" << round(hours) << ":" << round(minutes) << ":" << round(seconds);

    return 0;
}