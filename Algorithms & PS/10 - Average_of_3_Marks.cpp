#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    cout << "Enter third number (c): ";
    cin >> c;

    double x = (a + b + c)/3;
    cout << "The avg of " << a << ", " << b << ", and " << c << " is: " << x << endl;

    return 0;
}