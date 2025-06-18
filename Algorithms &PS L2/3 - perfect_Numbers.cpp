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

void PrintIsPerfect(int x)
{
    if (CheckIsPerfect(x))
        cout << x << " is a Perfect Number.\n";
    else
        cout << x << " is NOT a Perfect Number.\n";
}

int main()
{
    PrintIsPerfect(ReadPositiveNumber("Please enter a positive number:"));
    return 0;
}
