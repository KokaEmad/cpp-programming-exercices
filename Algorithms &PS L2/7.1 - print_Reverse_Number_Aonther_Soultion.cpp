

#include <iostream>
#include <string>
using namespace std;

// Reads a positive integer from the user
int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Reverses the digits of a number
int reverseNumber(int number)
{
    int reversed = 0;
    while (number > 0)
    {
        reversed = reversed * 10 + (number % 10);
        number /= 10;
    }
    return reversed;
}

int main()
{
    int num = readPositiveNumber("Please enter a positive number:");
    cout << "\nReversed number is: " << reverseNumber(num) << "\n";
    return 0;
}
