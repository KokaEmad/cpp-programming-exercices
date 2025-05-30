#include<iostream>
using namespace std;

int main ()

{
    int x[5] = {22,18,2,55,520 };
    cout << x[0]+x[4]<<endl;

    x[0]= 100;
    cout << x[0] + x[4] << endl;
    cout <<x<<endl;//printing the address of the first element
    cout << &x[0] << endl; //printing the address of the first element
}