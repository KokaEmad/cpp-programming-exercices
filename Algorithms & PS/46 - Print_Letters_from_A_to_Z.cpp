#include <iostream>
using namespace std;

void printLettersFromAToZ()
{
    for (int i = 65; i <= 90; ++i) // ASCII codes for 'A' to 'Z'
    {
        cout << char(i) << " ";
    }
    cout << endl;
}

void printLettersFromaToz()
{
    for (int i = 97; i <= 122; ++i) // ASCII codes for 'a' to 'z'
    {
        cout << char(i) << " ";
    }
    cout << endl;
}

int main()
{
    printLettersFromAToZ();
    return 0;
}
