#include <iostream>
using namespace std ;

int main ()
{
    cout << "please enter the first number A:\n" ;
    float a;
    cin >> a;

    cout << "please enter the first number b:\n" ;
    float b;
    cin >> b;

    cout << a << " = " << b << " is " << (a == b) << endl;

    cout << a << " = " << b << " is " << (a < b) << endl;

    cout << a << " = " << b << " is " << (a > b) << endl;

    cout << a << " = " << b << " is " << (a != b) << endl;

    cout << a << " = " << b << " is " << (a >= b) << endl;

    cout << a << " = " << b << " is " << (a <= b) << endl;


    return 0 ;
}