#include <iostream>
using namespace std;




 // Function to read number of the day
short readNumberOfMonth()
{
    short num;
    cout << "number of the month: ";
    cin >> num;
    return num;
}

// Function to calculate and print the day
void calculate(short num)
{
    if (num == 1)
    {
        cout << "This is January." << endl;
    }
    else if (num == 2)
    {
        cout << "This is February." << endl;
    }
    else if (num == 3)
    {
        cout << "This is March." << endl;
    }
    else if (num == 4)
    {
        cout << "This is April." << endl;
    }
    else if (num == 5)
    {
        cout << "This is May." << endl;
    }
    else if (num == 6)
    {
        cout << "This is June." << endl;
    }
    else if (num == 7)
    {
        cout << "This is July." << endl;
    }
    else if (num == 8)
    {
        cout << "This is August." << endl;
    }
    else if (num == 9)
    {
        cout << "This is September." << endl;
    }
    else if (num == 10)
    {
        cout << "This is October." << endl;
    }
    else if (num == 11)
    {
        cout << "This is November." << endl;
    }
    else if (num == 12)
    {
        cout << "This is December." << endl;
    }
    else
    {
        cout << "Invalid month number!" << endl;
    }
}

int main()
{
    short num = readNumberOfMonth();
    calculate(num);
    
    return 0;
}

