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

    int i = num;
    while (i>=1)
    {
        cout << i << endl;
        i--;
    }


}

int main()
{
    int num = readNum();
    printNumberFromNTo1(num);
    return 0;
}