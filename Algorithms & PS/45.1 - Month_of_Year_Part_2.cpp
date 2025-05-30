#include <iostream>
using namespace std;

enum enMonths{January=1, February, March, April, May, June, July, August, September, October, November, December};

    // Function to read number of the day

short readNumberOfMonth()

{
    short num;
    cout << "number of the month: ";
    cin >> num;
    return num;
}

// Function to calculate and print the day
void calculate(enMonths months)
{
    switch (months)
    {
        case enMonths::January:
            cout << "January" << endl;
            break;
        case enMonths::February:
            cout << "February" << endl;
            break;
        case enMonths::March:
            cout << "March" << endl;
            break;
        case enMonths::April:
            cout << "April" << endl;
            break;
        case enMonths::May:
            cout << "May" << endl;
            break;
        case enMonths::June:
            cout << "June" << endl;
            break;
        case enMonths::July:
            cout << "July" << endl;
            break;
        case enMonths::August:
            cout << "August" << endl;
            break;
        case enMonths::September:
            cout << "September" << endl;
            break;
        case enMonths::October:
            cout << "October" << endl;
            break;
        case enMonths::November:
            cout << "November" << endl;
            break;
        case enMonths::December:
            cout << "December" << endl;
            break;
        default:
            cout << "Wrong Month" << endl;
    }
}

int main()
{
    enMonths month;
    short m = readNumberOfMonth();
    month = (enMonths)m;
    
    calculate(month);
    
    return 0;
}

