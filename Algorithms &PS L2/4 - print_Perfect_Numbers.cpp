#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool CheckIsPerfect(int x)
{
    int sum = 0;
    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
            sum += i;
    }
    return x == sum;
}

void PrintPerfectNumbersFrom1ToN(int x)
{
    cout << "\nPerfect numbers from 1 to " << x << " are:\n";
    for (int i = 1; i <= x; i++)
    {
        if (CheckIsPerfect(i))
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number:"));
    return 0;
}
