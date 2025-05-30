#include <iostream>
using namespace std;

double readTotalSales()
{
    double totalSales;
    cout << "Please enter the total of sales:\n";
    cin >> totalSales;
    return totalSales;
}

void printTotalComission(double totalSales)
{
    if ( totalSales>=1000000)
    {
        cout << "Total Comission = "<<.1*totalSales<<endl;
    }

    else if ( totalSales>=500000)
    {
        cout << "Total Comission = "<<.02*totalSales<<endl;
    }

    else if (totalSales >= 100000)
    {
        cout << "Total Comission = " << .03 * totalSales << endl;
    }
    else if (totalSales >= 50000)
    {
        cout << "Total Comission = " << .05 * totalSales << endl;
    }
    else
    {
        cout << "Total Comission = " << 0<<endl;
    }
}

int main()
{
    double totalSales = readTotalSales();
    printTotalComission(totalSales);
    return 0;
}
