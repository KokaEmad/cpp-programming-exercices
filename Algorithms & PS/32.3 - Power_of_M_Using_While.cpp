#include <iostream>
using namespace std;

int readBase()
{
    int m;
    cout << "Enter the base (m): ";
    cin >> m;
    return m;
}

int readExponent()
{
    int n;
    cout << "Enter the exponent (n): ";
    cin >> n;
    return n;
}

int power(int m, int n)
{
    int result = 1;
    int i = 1  ;
    while (i<=n)
    {
        result *= m ;
        i++;
    }
    
    return result;
}

void printPower(int base, int exponent, int result)
{
    cout << base << "^" << exponent << " = " << result << endl;
}

int main()
{
    int m = readBase();
    int n = readExponent();

    int result = power(m, n);

    printPower(m, n, result);

    return 0;
}
