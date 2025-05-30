#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double side)
{
    double area = ((22 / 7 * pow(side / 2, 2)) / 4);
    return area ;
}




int main()
{

    cout << "Circle Area Calculator\n";

    double side;

    cout << "Enter the side length of the square:\n";
    cin >> side;


    cout << "The area of the Circle is: " << ceil(calculateArea(side)) << "\n";

    return 0;
}