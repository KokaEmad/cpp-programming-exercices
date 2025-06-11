#include <iostream>
using namespace std;

void printLettersFromAToZ()
{
    int i = 65;
    while ( i <= 90) // ASCII codes for 'A' to 'Z'
    {
        cout << char(i) << " ";
        ++i;
    }
    cout << endl;
}

void printLettersFromaToz()
{
    int i = 97;
    while ( i <= 122) // ASCII codes for 'a' to 'z'
    {
        cout << char(i) << " ";
        ++i;
    }
    cout << endl;
}

int main()
{
    printLettersFromAToZ();
    return 0;
}