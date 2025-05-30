#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

struct info
{
    string name ;
    int age ;
    string city ;
    string country;
    float monthlySalary ;
    float yearlySalary ;
    char gender ;
    bool married ;
};



int main()
{
    info info1; // Just declare the struct variable once
    
    cout << "Please enter your name: ";
    getline(cin, info1.name);

    cout << "Please enter your age: ";
    cin >> info1.age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    cout << "Please enter your city: ";
    getline(cin, info1.city);

    cout << "Please enter your country: ";
    getline(cin, info1.country);

    cout << "Please enter your monthly salary: ";
    cin >> info1.monthlySalary;

    cout << "Please enter your yearly salary: ";
    cin >> info1.yearlySalary;

    cout << "Please enter your gender (M/F): ";
    cin >> info1.gender;

    cout << "Are you married? (1 for Yes, 0 for No): ";
    cin >> info1.married;

    cout << "\n******************************\n";
    cout << "Name            : " << info1.name << endl;
    cout << "Age             : " << info1.age << endl;
    cout << "City            : " << info1.city << endl;
    cout << "Country         : " << info1.country << endl;
    cout << "Monthly Salary  : " << info1.monthlySalary << endl;
    cout << "Yearly Salary   : " << info1.yearlySalary << endl;
    cout << "Gender          : " << info1.gender << endl;
    cout << "Married         : " << boolalpha << info1.married << endl;
    cout << "******************************\n";

    return 0;
}