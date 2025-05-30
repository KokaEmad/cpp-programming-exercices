#include <iostream>
#include <cmath>
using namespace std;

struct timeInput 
{
    int seconds,
        minutes,
        hours,
        days,
        weeks,
        years;
};

long long int calculateTotalSeconds(timeInput t)
{
    long long int totalSeconds = t.seconds + (t.minutes * 60) + (t.hours * 3600) + (t.days * 86400) + (t.weeks * 604800) + (t.years * 31536000);
    return totalSeconds;
}

int main()
{

    timeInput input ;
    cout << "Enter the number of seconds: \n";
    cin >> input.seconds;
    cout << "Enter the number of minutes: \n";
    cin >> input.minutes;
    cout << "Enter the number of hours: \n";
    cin >> input.hours;
    cout << "Enter the number of days: \n";
    cin >> input.days;
    cout << "Enter the number of weeks: \n";
    cin >> input.weeks;
    cout << "Enter the number of years: \n";
    cin >> input.years;

    
    cout << "The total number of seconds is: " << round(calculateTotalSeconds(input)) << endl;

    return 0;
}