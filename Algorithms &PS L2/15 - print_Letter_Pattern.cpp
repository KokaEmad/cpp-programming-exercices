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

void PrintLetterPattern(int Number)
{
    cout << "\n";

    for (int i = 65; i <= 65 + Number - 1; i++)
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
   PrintLetterPattern(readPositiveNumber("Enter positive number : \n"));




}

