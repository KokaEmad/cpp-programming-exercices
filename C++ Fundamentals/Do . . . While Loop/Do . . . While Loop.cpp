#include <iostream>
using namespace std;

int readIntNumberInRange(int from, int end)
{
    int number;
    do
    {
        cout << "Enter a number between " << from << " and " << end << ": ";
        cin >> number;
    } while (number < from || number > end);

    return number;
}

int main()
{
    cout << readIntNumberInRange(20, 30);
}
