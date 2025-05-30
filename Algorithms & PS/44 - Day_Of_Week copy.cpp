#include <iostream>
using namespace std;

// Function to read number of the day 
short readNumberOfDay()
{
    short num;
    cout << "number of the day: ";
    cin >> num;
    return num;
}

// Function to calculate and print the day
void calculate(short num)
{
    if (num == 1)
    {
        cout << "The day is sunday" << endl;
    }
    else if (num == 2)
    {
        cout << "The day is monday" << endl;
    }
    else if (num == 3)
    {
        cout << "The day is tuesday" << endl;
    }
    else if (num == 4)
    {
        cout << "The day is wensday" << endl;
    }
    else if 
        (num == 5)
        {
            cout << "The day is thursday" << endl;
        }
    else if
        (num == 6)
        {
            cout << "The day is friday" << endl;
        }
}

int main()
{
    short num = readNumberOfDay();
    calculate(num);
    
    return 0;
}

enum Days
{
    Sunday =1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
