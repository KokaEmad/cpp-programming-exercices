#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int LoanAmount ; 
    cout << "Please enter loan amount :"<<endl;
    cin >> LoanAmount;

    int MonthlyInstallment ;
    cout << "Please enter monthly installment  :" << endl;
    cin >> MonthlyInstallment;

    int months = LoanAmount / MonthlyInstallment; 
    cout << "Total months = " << months << " months"<< endl ; 

    return 0;
}