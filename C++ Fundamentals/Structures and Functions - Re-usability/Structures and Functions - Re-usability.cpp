#include <iostream>
using namespace std;

struct strInfo 
{
    string firstName;
    string lastName;
    short age;
    string phoneNumber;
};

void readInfo(strInfo &info)
{
    cout << "Enter your first name: ";
    cin >> info.firstName;
    cout << "Enter your last name: ";
    cin >> info.lastName;
    cout << "Enter your age: ";
    cin >> info.age;
    cout << "Enter your phone number: ";
    cin >> info.phoneNumber;
}

void displayInfo(strInfo info)
{
    cout << "****************************\n" << endl;    
    cout << "First Name: " << info.firstName << endl;
    cout << "Last Name: " << info.lastName << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone Number: " << info.phoneNumber << endl;
}


int main()
{
    strInfo info;
    readInfo(info);
    displayInfo(info);
    
    return 0;
}