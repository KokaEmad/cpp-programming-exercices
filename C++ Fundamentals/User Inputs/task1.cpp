#include <iostream>
using namespace std;

int main()
{
    string name, city, country;
    int age;
    float monthlySalary, yearlySalary;
    char gender;
    bool married;

    cout << "Please enter your name: ";
    cin.ignore();       // Ignore any leftover newline character
    getline(cin, name); // Reads full name including spaces

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your city: ";
    cin.ignore();
    getline(cin, city);

    cout << "Please enter your country: ";
    getline(cin, country);

    cout << "Please enter your monthly salary: ";
    cin >> monthlySalary;

    cout << "Please enter your yearly salary: ";
    cin >> yearlySalary;

    cout << "Please enter your gender (M/F): ";
    cin >> gender;

    cout << "Are you married? (1 for Yes, 0 for No): ";
    cin >> married;

    cout << "\n******************************\n";
    cout << "Name            : " << name << endl;
    cout << "Age             : " << age << endl;
    cout << "City            : " << city << endl;
    cout << "Country         : " << country << endl;
    cout << "Monthly Salary  : " << monthlySalary << endl;
    cout << "Yearly Salary   : " << yearlySalary << endl;
    cout << "Gender          : " << gender << endl;
    cout << "Married         : " << boolalpha << married << endl;
    cout << "******************************\n";

    return 0;
}
