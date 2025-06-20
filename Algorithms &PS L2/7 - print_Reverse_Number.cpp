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

void calculateReverse(int number)
{
    int digit = 0;
    while (number > 0)
    {
        digit = number % 10 ;
        number = number / 10;
        cout << digit;
    }
    
}

void printReverse(int number)
{
    cout <<  "Rverse number of "<< number << " is :\n";
    calculateReverse(number);
    

}

int main()
{
    printReverse(ReadPositiveNumber("Enter Positve number : \n"));
    return 0;
}

