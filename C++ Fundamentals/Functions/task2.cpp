#include <iostream>
using namespace std;

void mySumProcedure()
{
    int x ,y ;
    cout << "Please enter first number\n" ;
    cin >> x;
    cout << "Please enter second number\n";
    cin >> y;

    cout << "**********\n" << x+y << endl;
}

int mySumFunction()
{

    int x, y;
    cout << "Please enter first number\n";
    cin >> x;
    cout << "Please enter second number\n";
    cin >> y;

    cout << "**********\n" << endl;
    return x+y;
    
}

int main()
{
    mySumProcedure();
    cout << mySumFunction();

    return 0;
}