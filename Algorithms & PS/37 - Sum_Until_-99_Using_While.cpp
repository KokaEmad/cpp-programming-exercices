#include <iostream>
using namespace std;

int sumUntilNegative99()
{
    int num = 0;
    int sum = 0;
    while (num != -99 )
    {
        sum += num;
        cin >> num;
    }
    return sum;
}

int main ()
{

    cout << sumUntilNegative99();
}