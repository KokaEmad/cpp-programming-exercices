#include <iostream>
using namespace std;

int main()
{   
    
    string fullName ; 
    cout <<  "Please enter your full name : \n";
    getline (cin,fullName);


    string str2;
    cout << " Please enter second string : \n";
    getline(cin, str2);

    string str3;
    cout << " Please enter string : \n";
    getline(cin, str3);

    cout << "**************\n";
    cout << "The length of Full Name is : "<< fullName.length() << endl;
    cout << "Characters at 0,2,4,7 is : " << fullName[0] << " " << fullName[2] << " " << fullName[4] << " " << fullName[7] << "\n";
    cout << "The concatenation str2 and str3 = "<< str2+str3<<endl;
    cout << str2 << " * " << str3 << " = "<< stoi(str2)*stoi(str3)<< endl;

        return 0;
}