#include <iostream>
using namespace std;


int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int reverseNumber(int number)
{
    int reversed = 0;
    while (number > 0)
    {
        reversed = (reversed * 10) + (number % 10);
        number = number / 10 ; 
    }
    return reversed;
}

void printFromRightToLeft(int number)
{
    int reminder = 0 ;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10 ;  
        cout << reminder << endl;
    }
    
}

int main()
{
    printFromRightToLeft(reverseNumber(readPositiveNumber("Enter positive number:\n")));
    return 0;
}