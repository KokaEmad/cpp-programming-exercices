#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int seconds,
        minutes,
        hours,
        days,
        weeks,
        years;
    cout << "Enter the number of seconds: \n";
    cin >> seconds;
    cout << "Enter the number of minutes: \n";
    cin >> minutes;
    cout << "Enter the number of hours: \n";
    cin >> hours;
    cout << "Enter the number of days: \n";
    cin >> days;
    cout << "Enter the number of weeks: \n";
    cin >> weeks;
    cout << "Enter the number of years: \n";
    cin >> years;

    seconds = seconds + (minutes * 60) + (hours * 3600) + (days * 86400) + (weeks * 604800) + (years * 31536000);
    cout << "The total number of seconds is: " << round(seconds) << endl;

    return 0;
}