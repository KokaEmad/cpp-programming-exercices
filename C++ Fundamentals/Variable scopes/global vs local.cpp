#include <iostream>
using namespace std;

int x = 10; // Global variable

void myFunction1()
{
    int x = 20; // Local variable
    cout << "Local x: " << x << endl; // This will print the local variable
}

void myFunction2()
{
    cout << "Global x: " << x << endl; // This will print the global variable
}

int main()
{
    int x = 30; // Local variable in main
    cout << "Main x: " << x << endl; // This will print the local variable in main
    ::x++; // Increment the global variable
    cout << "Global x after increment: " << ::x << endl; // This will print the global variable after increment
    cout << "Global x: " << ::x << endl; // This will print the global variable using scope resolution operator
    myFunction1(); // Calls the function that uses the local variable
    myFunction2(); // Calls the function that uses the global variable
    return 0;
}