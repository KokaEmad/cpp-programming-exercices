#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout << "Enter number : \n";

    float num1;

    cin >> num1;

    cout << floor(pow(num1, 2)) << "\n"
         << floor(pow(num1, 3)) << "\n"
         << floor(pow(num1, 4));

    return 0;
}