#include <iostream>
#include <cmath>

using namespace std; 

int main ()
{
    cout << "Please enter the number : "<< endl;
    double number;
    cin >> number;
    cout << "Please enter the m : " << endl;
    double m;
    cin >> m;
    cout << round(pow(number,m));

    return 0;
}