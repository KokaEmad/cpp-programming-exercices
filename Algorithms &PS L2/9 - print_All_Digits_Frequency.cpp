#include <iostream>
using namespace std;

// Reads a positive integer from the user
int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Counts how many times digitToCheck appears in number
int countDigitFrequency(int number, short digitToCheck)
{
    int freq = 0;
    while (number > 0)
    {
        int remainder = number % 10; // Get last digit
        if (remainder == digitToCheck)
            freq++;
        number /= 10; // Remove last digit
    }
    return freq;
}

// Prints the frequency of each digit (0-9) in the number
void printAllDigitsFrequency(int number)
{
    cout << "\nDigit frequencies:\n";
    for (short digit = 0; digit <= 9; digit++)
    {
        int freq = countDigitFrequency(number, digit);
        if (freq > 0)
            cout << "Digit " << digit << " appears " << freq << " time(s).\n";
    }
}

int main()
{
    int number = readPositiveNumber("Please enter a positive number: ");
    printAllDigitsFrequency(number);
    return 0;
}
