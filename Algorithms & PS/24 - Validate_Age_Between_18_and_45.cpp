#include <iostream>
using namespace std;

short readAge()
{
    short age;
    cout << "Enter your age:\n";
    cin >> age;
    return age;
}

void validateAge(short age)
{
    if (age > 18 && age < 45)
    {
        cout << "Valid Age\n";
    }
    else
    {
        cout << "Invalid Age\n";
    }
}

int main()
{
    short age = readAge();
    validateAge(age);
    return 0;
}
