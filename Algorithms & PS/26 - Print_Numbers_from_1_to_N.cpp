#include <iostream>
using namespace std;

int readNum()
{
    int num ;
    cout << "Please enter the number\n";
    cin >> num;
    return num;
}

void printNumberFrom1ToN(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i<< endl;
    }
    
}

int main ()
{
    int num = readNum();
    printNumberFrom1ToN(num);
    return 0;
}