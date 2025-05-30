#include <iostream>
using namespace std;

struct strInfo
{
    string firstName;
    string lastName;
    short age;
    string phone;
}
;

int main()
{
    strInfo person[5]; // Array of structures
    person[0].firstName = "Kyrillos";
    person[0].lastName = "Emad";
    person[0].age = 25;
    person[0].phone = "0123456789";
    
    person[1].firstName = "George";
    person[1].lastName = "Emad";
    person[1].age = 30;
    person[1].phone = "797543214";
    
    cout << person[1].firstName << endl;


    return 0;
}