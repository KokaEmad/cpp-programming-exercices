#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout << "Circle Area Calculator\n";

    double side, area;

    cout << "Enter the side length of the square:\n";
    cin >> side;

    /*  area = ((22 / 7 * (side / 2) * (side / 2)) / 4);*/
    area = ((22 / 7 * pow(side / 2, 2)) / 4);
    cout << "The area of the Circle is: " << ceil(area) << "\n";

    return 0;
}