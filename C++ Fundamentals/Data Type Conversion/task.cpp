#include <iostream>
using namespace std;
#include <string> // to use (sto(i,d,f),to_string function )
int main()
{
    string st1 = "43.22";
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;

    // st1 to nums
    int int_num1 = stoi(st1);
    double double_num = stod(st1);
    float float_num = stof(st1);

    // N1 to string 
    string str2 = to_string(N1);

    // N2 to string
    string str3 = to_string(N2);

    // N3 to string and intger
    string str4 = to_string(N3);
    int int_num2 = N3;
    
    cout << "\"int_num1: \" " << int_num1 << endl;
    cout << "\"double_num: \" " << double_num << endl;
    cout << "\"float_num: \" " << float_num << endl;
    cout << "\"str2: \" " << str2 << endl;
    cout << "\"str3: \" " << str3 << endl;
    cout << "\"str4: \" " << str4 << endl;
    cout << "\"int_num2: \" " << int_num2 << endl;
}