#include <iostream>
#include <cmath>

using namespace std;


float calculateArea(float a, float d)
{
    float Area = a * sqrt(pow(d, 2) - pow(a, 2));
    return Area;
}
int main()
{
    float a, d;
    cin >> a;
    cin >> d;

    cout << "Area = " << calculateArea(a,d);

    return 0;
}