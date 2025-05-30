#include <iostream>
using namespace std;

short readAge()
{
    short age;
    cout << "Please enter your age: \n";
    cin >> age;
    return age;
}

bool hasDriverLicense()
{
    bool hasLicense;
    cout << "Do you have a driver's license? (1 for Yes, 0 for No): \n";
    cin >> hasLicense;
    return hasLicense;
}

void checkHiring(short age, bool hasLicense)
{
    if (age > 21 && hasLicense)
    {
        cout << "Hired\n";
    }
    else
    {
        cout << "Rejected\n";
    }
}

int main()
{
    short age = readAge();
    bool license = hasDriverLicense();
    checkHiring(age, license);
    return 0;
}
