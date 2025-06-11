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
    int i = 1;
    while (i<=num)
    {
        cout << i << endl;
        i++;
    }
}

int main ()
{
    int num = readNum();
    printNumberFrom1ToN(num);
    return 0;
}