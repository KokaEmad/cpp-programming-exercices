#include <iostream>
#include <cmath>

using namespace std;

double calculateByTheNumberAndM(double num,double m){
    double result = pow(num,m);
    return result;
}
int main()
{
    cout << "Please enter the number : " << endl;
    double number;
    cin >> number;
    cout << "Please enter the m : " << endl;
    double m;
    cin >> m;
    cout << round(calculateByTheNumberAndM(number,m));

    return 0;
}