#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double circumference)
{

    double area = floor((pow(circumference, 2) / (4 * 22.0 / 7.0)));
    return area;
}

int main()
{

    cout << "Circle Area Calculator\n";

    double circumference;

    cout << "Enter the circumference:\n";
    cin >> circumference;
    cout << "The area of the Circle is: " << calculateArea(circumference) << "\n";

    return 0;
}