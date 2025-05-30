#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout << "Enter number : \n";

    float num1;

    cin >> num1;

    cout << pow(num1, 2) << "\n"
         << pow(num1, 3) << "\n"
         << pow(num1, 4);

    return 0;
}