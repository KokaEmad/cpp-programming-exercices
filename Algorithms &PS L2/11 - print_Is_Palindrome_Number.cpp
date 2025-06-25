#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
        if (cin.fail())
        {
            cin.clear();             // clear the fail state
            cin.ignore(10000, '\n'); // discard bad input
            number = -1;             // force loop
        }
    } while (number <= 0);
    return number;
}

int reverseNumber(int number)
{
    int remainder = 0;
    int reverse = 0;
    while (number > 0)
    {
        remainder = number % 10;
        reverse = remainder + (reverse * 10);
        number = number / 10;
    }
    return reverse;
}

bool isPalindromeNumber(int number)
{
    return number == reverseNumber(number);
}

void printPalindromeNumber(int number)
{
    if (isPalindromeNumber(number))
    {
        cout << "\nYes, it is a Palindrome number.\n";
    }
    else
    {
        cout << "\nNo, it is NOT a Palindrome number.\n";
    }
}

int main()
{
    printPalindromeNumber(readPositiveNumber("Enter positive number: "));
    cout << endl;
}
