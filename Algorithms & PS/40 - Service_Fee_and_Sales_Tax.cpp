#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double totalBill = 0.0;
    double servicesFee = .10;
    double tax = .16;
    double billValue = 0.0;

    cout << "Enter the bill amount: \n";
    cin >> billValue;
    totalBill = billValue + (billValue * servicesFee);
    totalBill += totalBill * tax;

    cout << "Total bill including services fee and tax: " << totalBill << endl;
 
    return 0;
}