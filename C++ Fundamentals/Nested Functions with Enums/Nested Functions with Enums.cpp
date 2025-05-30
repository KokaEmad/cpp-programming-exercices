
#include <iostream>
using namespace std;

enum enWeekDay {
    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thursday = 5,
    friday = 6,
    saturday = 7
};

void showWeeKDayMenu ()
{
    cout << "**************************************\n";
    cout << "       Week Days       \n";
    cout << "**************************************\n";
    cout << "1.  Sunday \n";
    cout << "2.  Monday \n";
    cout << "3.  Tuesday \n";
    cout << "4.  Wednesday \n";
    cout << "5.  Thursday \n";
    cout << "6.  Friday \n";
    cout << "7.  Saturday \n";
    cout << "**************************************\n";
    cout << "Please enter the number of the day:" << endl;
}

enWeekDay readTheDay()
{
    short d;
    cin >> d;
    enWeekDay enDay;
    enDay = (enWeekDay)d;

    return enDay;
}

string getDayWeekName (enWeekDay Day)
{
    switch (Day)
    {
    case enWeekDay::sunday:
        return "Sunday";
        break;
    case enWeekDay::monday:
        return "Monday";
        break;
    case enWeekDay::tuesday:
        return "Tuesday";
        break;
    case enWeekDay::wednesday:
        return "Wednesday";
        break;
    case enWeekDay::thursday:
        return "Thursday";
        break;
    case enWeekDay::friday:
        return "Friday";
        break;
    case enWeekDay::saturday:
        return "Saturday";
        break;
    default:
        return"NO!";
        break;
    }
}

int main()
{
    showWeeKDayMenu();
    cout << "The day you selected is: " << getDayWeekName(readTheDay()) << endl;

    return 0;
}