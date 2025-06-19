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

void printDigits(long long x)
{
    int reminder = 0 ;
    while (x>0)
    {
        reminder = x % 10 ;
        cout << reminder << endl;
        x = x / 10;

    }
    

}

int main()
{
    printDigits(ReadPositiveNumber("Please enter a positive number:"));
    return 0;
}
