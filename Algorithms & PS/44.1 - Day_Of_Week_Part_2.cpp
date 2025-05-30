#include <iostream>
using namespace std;
enum enDays
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

// Function to read number of the day 
short readNumberOfDay()
{
    short num;
    cout << "number of the day: ";
    cin >> num;
    return num;
}

// Function to calculate and print the day
void calculate(enDays Day)
{
    switch (Day)
    {
    case enDays::Sunday:
        cout << "The day is Sunday" << endl;
        break;
    case enDays::Monday:
        cout << "The day is Monday" << endl;
        break;
    case enDays::Tuesday:
        cout << "The day is Tuesday" << endl;
        break;
    case enDays::Wednesday:
        cout << "The day is Wednesday" << endl;
        break;
    case enDays::Thursday:
        cout << "The day is Thursday" << endl;
        break;
    case enDays::Friday:
        cout << "The day is Friday" << endl;
        break;
    case enDays::Saturday:
        cout << "The day is Saturday" << endl;
        break;
    default:
        cout << "Your number is wrong" << endl;
        break;
    }
}

int main()
{
    enDays day;
    short d = readNumberOfDay();
    day = (enDays)d;

    calculate(day);
    
    return 0;
}

/*another solve here ----------->Nested Functions with Enums*/