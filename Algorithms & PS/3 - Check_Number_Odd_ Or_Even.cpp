#include <iostream>
using namespace std;

enum enNumberType {Odd = 1 , Even = 2 };
int readNum()
{
    int num;
    cout << "Please Enter the number :\n";
    cin >> num;
    return num;
}

enNumberType checkNumberType(int num)
{
    if (num % 2 == 0)
    {
        return Even;
    }
    else
    {
        return Odd;
    }
}

void printNumberType(enNumberType numberType)

{
    if (numberType == Even )
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
}

int main()
{
    printNumberType(checkNumberType(readNum()));

    return 0; 

}