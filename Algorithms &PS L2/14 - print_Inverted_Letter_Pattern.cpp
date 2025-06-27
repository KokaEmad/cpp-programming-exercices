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

void printInvertedLetterPattern(int number)
{
    for (int i = 64 + number ; i >= 65; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void PrintInvertedLetterPattern(int Number)
{
    
    for (int i = 65 + Number ; i >= 65 ; i--)
    {
        for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
        {
            cout << char(i);
        }

        cout << "\n"; 
    }
}

int main()
{
    PrintInvertedLetterPattern(readPositiveNumber("Enter positive number : \n"));
}

