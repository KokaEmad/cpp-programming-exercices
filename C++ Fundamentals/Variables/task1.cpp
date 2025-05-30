#include <iostream>
using namespace std ; 
int main ()
{

    string name = "Kyrillos Emad"; 
    int age = 25; 
    string city = "Bahjoura";
    string country = "Egypt";
    float monthlySalary = 1000;
    float yearlySalary = monthlySalary*12;
    char gender = 'M';
    bool married = true;

    cout << "******************************\n\n";
    cout << "Name:"<<name<<endl;
    cout << "Age :" << age << endl;
    cout << "City:" << city << endl;
    cout << "Country:" << country << endl;
    cout << "Monthly Salary:" << monthlySalary << endl;
    cout << "Yearly Salary:" << yearlySalary << endl;
    cout << "Gender:" << gender << endl;
    cout << "Married:" << married << endl;
    cout << "Gender:" << gender << endl;
    cout << "\n******************************\n";

    return 0;
}