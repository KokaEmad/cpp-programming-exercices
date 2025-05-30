#include <iostream>
#include <cmath>
using namespace std;

void calculateThePow(float num )
{

    cout << floor(pow(num, 2)) << "\n"
         << floor(pow(num, 3)) << "\n"
         << floor(pow(num, 4));

}

int main()
{

    cout << "Enter number : \n";

    float num1;

    cin >> num1;

    calculateThePow(num1);


    return 0;
}