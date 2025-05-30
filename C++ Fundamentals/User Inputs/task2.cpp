#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;

    cout << "Please enter a \n";
    cin >> a;

    cout << "Please enter b \n";
    cin >> b;

    cout << "Please enter c \n";
    cin >> c;

    int sum = a + b + c;

    cout << a << "+\n";
    cout << b << "+\n";
    cout << c << endl
         << "ــــــــــــــ\n";

    cout << "Total = " << sum;

    return 0;
}