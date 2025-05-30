#include <iostream>
using namespace std;

void swapFunction(double &x, double &y)
{
    double temp = x;
    x = y;
    y = temp;
    cout << "\n After swapping : \n"
         << "a = " << x << "\n"
         << "b = " << y << "\n";
}

int main()
{
    double a, b;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    cout << "Swapping inside function:\n";
    swapFunction(a, b);

    cout << "Swapping inside the main function:\n";
    cout << "\n After swapping : \n"
         << "a = " << a << "\n"
         << "b = " << b << "\n";
    return 0;
}