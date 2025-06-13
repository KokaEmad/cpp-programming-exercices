#include <iostream>
using namespace std;

struct strInfo
{
    short age;
    bool license;
};

strInfo readInfo()
{
    strInfo driver;

    cout << "Please enter your age: \n";
    cin >> driver.age;
    cout << "Do you have a driver's license? (1 for Yes, 0 for No): \n";
    cin >> driver.license;

    return driver;
}


void checkHiring(strInfo Info)
{
    if (Info.age > 21 && Info.license)
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
    checkHiring(readInfo());
    return 0;
}
