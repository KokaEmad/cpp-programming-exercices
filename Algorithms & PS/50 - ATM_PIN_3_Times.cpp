#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    int password = 1234;
    int inputPass;
    int balance = 000; 

    while (counter < 3 && inputPass != password)
    {
        cout << "Enter password: ";
        cin >> inputPass;
        counter++;
    }

    if (inputPass == password)
    {
        cout << "Access granted. Your balance is: " << to_string(balance) << endl;
    }
    else
    {
        cout << "Access denied. Too many failed attempts." << endl;
    }

    return 0;
}
