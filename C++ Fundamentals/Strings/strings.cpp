#include <iostream>
using namespace std;

int main() 
{
    string str1 = "K E F";
    cout << "The length of the str is : "<< str1.length()<< endl;
    
    cout << str1[0]<< endl; 


    string str2 = "10";
    string str3 = "20";
    string str4 = str2 + str3;
    cout << str4 << endl;

    cout << stoi(str2) + stoi(str3) << endl;


    
    return 0;
}