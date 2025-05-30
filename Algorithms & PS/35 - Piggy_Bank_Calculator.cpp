#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double penny, nickel, dime, quarter, dollar, totalPennies, totalDollars;

    /*nickel = 5 * penny;
    dime = 10 * penny;
    quarter = 25 * penny;
    dollar = 100 * penny;*/

    

    cout << "Enter number of pennies:\n";
    cin >> penny ;
    cout << "Enter number of nickel:\n";
    cin >> nickel;
    cout << "Enter number of dime:\n";
    cin >> dime;
    cout << "Enter number of quarter:\n";
    cin >> quarter;
    cout << "Enter number of dollar:\n";
    cin >> dollar;

    totalPennies = penny + nickel * 5 + dime * 10 + quarter * 25 + dollar * 100;

    totalDollars = dollar + nickel * .05 + dime * .10 + quarter * .25 + penny * .01;

    cout << "totalPennies= " << totalPennies << " Pennies " << "\n";
    cout << "totalDollars= " << totalDollars <<" $ "<<"\n";
    return 0;
}