#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(double a, double h)
{
    double area = ceil(.5 * a * h);
    return area ;
}

int main()
{

    
    double a,h;
    cin >>a;
    cin >> h;

    cout << "Area = "<< calculateArea(a,h);
    return 0;
}