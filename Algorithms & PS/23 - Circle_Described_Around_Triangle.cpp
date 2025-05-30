#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout << "Circle Area Calculator from description around an arbitrary trianlge \n";

    double a,b,c;

    cout << "Enter the First a:\n";
    cin >> a;

    cout << "Enter the b :\n";
    cin >> b;

    cout << "Enter the c :\n";
    cin >> c;

    double p = (a+b+c)/2;
    double area = 3.14 * pow(((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)))),2);
    cout << "The area of the Circle is: " << round(area) << "\n";

    return 0;
}