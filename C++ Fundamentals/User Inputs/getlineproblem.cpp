#include <iostream>
using namespace std;

int main()
{
    string str1;
    int num1;
    cout << "num 1 \n";
    cin >> num1;
    cout << "str 1 \n ";
    //here i should user ignore funcion to make it dont care to enter button 
    cin.ignore(1,'\n');
    getline(cin,str1);

}

