#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double totalBill, cashPaid, remainder;

    cout << "Enter total bill : "<<"\n";

    cin >> totalBill;

    cout << "Enter total cash paid : " << "\n";

    cin >> cashPaid;

    remainder = cashPaid - totalBill;

    cout << remainder<<endl;

    return 0;
}