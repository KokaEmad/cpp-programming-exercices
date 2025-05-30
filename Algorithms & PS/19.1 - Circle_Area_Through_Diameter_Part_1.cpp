#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    cout << "Circle Area Calculator\n";

    double diameter, area;

    cout << "Enter the Diameter : \n";
    cin >> diameter;

    area = ((22 / 7 * (diameter * diameter)) / 4);

    cout << "The area of the Circle is: " <<ceil (area) << "\n";

    return 0;
}