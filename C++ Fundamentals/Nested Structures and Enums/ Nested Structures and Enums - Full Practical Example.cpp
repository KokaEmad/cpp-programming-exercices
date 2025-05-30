#include <iostream>
using namespace std;

enum enColor{Red,Green,Blue};
enum enGender{Male,Female};
enum enStatus{Single,Married};

struct  stAddress
{
    string streatName;
    string buildingNo;
    string zipCode;
};

struct stContactInfo 
{
    string phone;
    string email;
    stAddress address;

};

struct stPerson
{
    string firstName;
    string lastName;

    
    stContactInfo contactInfo;

    enGender gender;
    enColor color;
    enStatus status;

};

int main()
{
    stPerson person1 ;

    person1.firstName = "Kyrillos";
    person1.lastName = "Emad";
    person1.contactInfo.email="ke@email.com";
    person1.contactInfo.phone="0123456789";
    person1.contactInfo.address.buildingNo="1";
    person1.contactInfo.address.streatName="Church.st";
    person1.contactInfo.address.zipCode="+02";

    person1.color = enColor::Red;
    person1.gender = Male;
    person1.status = Single;
    
}
