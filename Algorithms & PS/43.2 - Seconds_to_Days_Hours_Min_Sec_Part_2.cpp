
#include <iostream>
#include <cmath>
using namespace std;
 


void secondsToTime(long long int totalSeconds)
{

    int SecondsPerDays = 24 * 60 * 60;
    int SecondsPerHours = 60 * 60;
    int SecondsPerMinutes = 60;

    int days = totalSeconds / SecondsPerDays;
    int remainder = totalSeconds % SecondsPerDays;

    int hours = remainder / SecondsPerHours;
    remainder = remainder % SecondsPerHours;

    int minutes = remainder / SecondsPerMinutes;
    remainder = remainder % SecondsPerMinutes;

    int seconds = remainder;

    cout << round(days) << ":" << round(hours) << ":" << round(minutes) << ":" << round(seconds);
}

int main()
{

    long long int  TotalSeconds = 0;
    cout << "please enter TotalSeconds : " << endl;

    cin >> TotalSeconds;

    secondsToTime(TotalSeconds);

    return 0;
}