#include <iostream>
using namespace std;

long long ReadPositiveNumber(string Message)
{
    long long Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CalcSumOfDigits()
{
    long long x = ReadPositiveNumber("Please enter a positive number:");
    int sum = 0;
    int remainder = 0;

    while (x > 0)
    {
        remainder = x % 10;
        sum += remainder;
        x = x / 10;
    }

    return sum;
}

void PrintSumDigits(int sum)
{
    cout << "Sum of Digits = " << sum << endl;
}

int main()
{
    PrintSumDigits(CalcSumOfDigits());
    return 0;
}
