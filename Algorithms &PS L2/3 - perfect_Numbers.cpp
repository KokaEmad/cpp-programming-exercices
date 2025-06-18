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

bool checkIsPerfect(int x)
{
    int sum = 0;
    for (int i = 1; i <= x/2; i++)
    {
        if (x%i == 0)
        {
            sum +=i ;
        }
        
        
    }

    return x == sum;
}

void printIsPrefect(int x)
{
    if (checkIsPerfect(x) )
    {
        cout << x <<" Is perfect ";
    }
    else
    cout << x << " Is NOT Perfect Number.\n"; 
    
}


int main()
{
    printIsPrefect(ReadPositiveNumber("Please enter positve number:\n"));
}