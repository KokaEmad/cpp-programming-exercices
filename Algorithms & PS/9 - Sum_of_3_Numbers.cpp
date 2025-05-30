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

    double sum = a + b + c;
    cout << "The sum of " << a << ", " << b << ", and " << c << " is: " << sum << endl;

    return 0;
}