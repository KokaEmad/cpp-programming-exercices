#include <iostream>
using namespace std;

int sumUsingContinue()
{
    int sum = 0;
    int num;
    for (int i = 1; i <= 5; i++)
    {
        cin >> num;
        if (num >= 50)
        {
            cout << "number above 50 \n";
            continue;
        }
        sum += num;
    }
    return sum;
}

int sumWithoutContinue()
{
    int sum = 0;
    int num;

    for (int i = 1; i <= 5; i++)
    {
        cin >> num;
        if (num <= 50)
        {
            
            sum += num;
        }
        else
        {
            cout << "number above 50 \n";
        }
    }

    return sum;
}

int main()
{
    cout << "Final Sum: " << sumWithoutContinue() << endl;
    // Or use: cout << "Final Sum: " << sumUsingContinue() << endl;
}
