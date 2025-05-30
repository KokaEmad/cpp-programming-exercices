#include <iostream>
#include <cmath> 

using namespace std;


int main()
{
    float a,d ;
    cin >> a;
    cin >> d;

    cout << "Area = "<< a * sqrt(pow(d,2)-pow(a,2));

    return 0;
}