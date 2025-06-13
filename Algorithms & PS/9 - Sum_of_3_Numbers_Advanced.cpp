#include <iostream>
using namespace std;

void readNums(int &num1, int &num2, int &num3)
{
    cout <<"Please enter First numbers :\n";
    cin >> num1;
}

int calcSum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

void printSum(int theSum)
{
    cout << "The sum of 3 numbers is: " << theSum << endl;
}

int main()
{
    int num1,num2,num3;
    readNums(num1, num2, num3);

    printSum(calcSum(num1,num2,num3));


    
}