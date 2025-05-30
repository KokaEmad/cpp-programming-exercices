#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(double diameter)
{
    double area = ((22 / 7 * (diameter * diameter)) / 4);
    return area ;
}

    int main()
{

    cout << "Circle Area Calculator\n";

    double diameter;

    cout << "Enter the Diameter : \n";
    cin >> diameter;

  

    cout << "The area of the Circle is: " << ceil(calculateArea(diameter))<< "\n";

    return 0;
}