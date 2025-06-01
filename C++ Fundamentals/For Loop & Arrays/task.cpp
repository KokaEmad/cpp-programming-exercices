#include <iostream>
using namespace std;

struct strInfo
{
    string firstName;
    string lastName;
    short age;
    string phone;
};

void readInfo(strInfo &person)
{
    cout << "Enter first name: ";
    cin >> person.firstName;
    cout << "Enter last name: ";
    cin >> person.lastName;
    cout << "Enter age: ";
    cin >> person.age;
    cout << "Enter phone: ";
    cin >> person.phone;
}

void printInfo(strInfo person)
{
    cout << "\n******************************\n";
    cout << "First Name      : " << person.firstName << endl;
    cout << "Last Name       : " << person.lastName << endl;
    cout << "Age             : " << person.age << endl;
    cout << "Phone           : " << person.phone << endl;
    cout << "******************************\n";
}

void readInfoPerson(strInfo persons[], int &length)
{
    cout << "Enter number of persons: ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "\n--- Enter data for person #" << i + 1 << " ---\n";
        readInfo(persons[i]);
    }
}

void printInfoPerson(strInfo persons[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printInfo(persons[i]);
    }
}

int main()
{
    int length = 0;
    strInfo persons[100];
    readInfoPerson(persons, length);
    printInfoPerson(persons, length);
    return 0;
}
