#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int LoanAmount;
    cout << "Please enter loan amount :" << endl;
    cin >> LoanAmount;

    int months;
    cout << "Please enter months :" << endl;
    cin >> months;

    int MonthlyInstallment = LoanAmount / months;
    cout << "Monthly Installment = " << MonthlyInstallment << endl;

    return 0;
}