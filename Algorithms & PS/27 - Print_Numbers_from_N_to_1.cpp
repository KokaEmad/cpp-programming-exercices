#include <iostream>
using namespace std;

int readNum()
{
    int num;
    cout << "Please enter the number\n";
    cin >> num;
    return num;
}

void printNumberFromNTo1(int num)
{
    for (int i = num; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    int num = readNum();
    printNumberFromNTo1(num);
    return 0;
}