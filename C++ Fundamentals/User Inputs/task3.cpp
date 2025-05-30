#include <iostream>
using namespace std;
int main()
{

    int theAddedNember , age ;

    cout <<"Please enter the added number:\n";
    cin >> theAddedNember;

    cout << "Please enter the age:\n";
    cin >> age;

    int ageOfOutput = age + theAddedNember;
    cout << "After " << theAddedNember << " years you will be " << ageOfOutput << " years old.";
    return 0;
}