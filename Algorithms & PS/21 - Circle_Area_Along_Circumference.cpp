#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout << "Circle Area Calculator\n";

    double circumference;

    cout << "Enter the circumference:\n";
    cin >> circumference;
    double area = (pow(circumference , 2)/(4*22.0/7.0));
    cout << "The area of the Circle is: " << area << "\n";

    return 0;
}