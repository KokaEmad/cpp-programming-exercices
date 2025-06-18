#include <iostream>
#include <cmath>

using namespace std;

void readNum(float &a , float &d )
{
    cin >> a;
    cin >> d;
}


float calculateArea(float a, float d)
{
    float Area = a * sqrt(pow(d, 2) - pow(a, 2));
    return Area;
}

void printArea(float area)
{
    cout << "Area = " << area;
}
int main()
{
    float side, diagonal;
    readNum(side,diagonal);
    ;

    printArea(calculateArea(side, diagonal));

    return 0;
}