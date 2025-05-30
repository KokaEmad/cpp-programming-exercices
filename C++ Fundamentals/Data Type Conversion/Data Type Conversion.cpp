#include <iostream>
using namespace std ;
#include <string> // to use (sto(i,d,f),to_string function )
int main ()
{
    // double to intger
    int x; 
    double y = 1.9;
    x = int(y) ;
    
    cout << x<< endl;


    
    string str1 = "54.123456789";

    // string to int
    int int_num = stoi(str1);
    cout << int_num << endl;

    // string to double
    double doub_num = stod(str1);
    cout << doub_num << endl;

    // string to float 

    float float_num = stof(str1);
    cout << float_num << endl ; 


    // numbers to string 

    string str2 = to_string(float_num);
    cout << str2 << endl;


}