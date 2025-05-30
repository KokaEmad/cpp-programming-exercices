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

void readInfoPerson(strInfo persons[])
{
    readInfo(persons[0]);
    readInfo(persons[1]);
}

void printInfoPerson(strInfo persons[])
{
    printInfo(persons[0]);
    printInfo(persons[1]);
}

int main()
{
    strInfo persons[2];
    readInfoPerson(persons);
    printInfoPerson(persons);
    return 0;
}
