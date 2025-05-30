#include <iostream>
#include <cmath>
using namespace std;

double calculateCircleArea(double rib1, double base)
{
    double area = floor((22.0 / 7.0) * (pow(base, 2) / 4) * (2 * rib1 - base) / (2 * rib1 + base));
    return area ;
}
int main()
{

    cout << "Circle Area Calculator from isoceles triangle \n";

    double rib1, base;

    cout << "Enter the First rib:\n";
    cin >> rib1;

    cout << "Enter the base :\n";
    cin >> base;
    
    cout << "The area of the Circle is: " << calculateCircleArea(rib1,base) << "\n";

    return 0;
}