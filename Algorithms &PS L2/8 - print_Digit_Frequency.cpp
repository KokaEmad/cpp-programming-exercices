#include <iostream>
using namespace std;

// Read a positive number (> 0)
int readPositiveNum()
{
    int number = 0;
    do
    {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number <= 0);
    return number;
}

// Read the main number to search in
int readMainNumber()
{
    return readPositiveNum();
}

// Read the digit to search for (0-9)
short readDigitToCheck()
{
    short digit = -1;
    do
    {
        cout << "Enter a digit to check [0-9]: ";
        cin >> digit;
    } while (digit < 0 || digit > 9);
    return digit;
}

// Count how many times digit appears in mainNumber
int countDigitFrequency(int mainNumber, int digit)
{
    int freqCount = 0;
    int remainder;

    while (mainNumber > 0)
    {
        remainder = mainNumber % 10;
        if (remainder == digit)
            freqCount++;
        mainNumber /= 10;
    }
    return freqCount;
}

int main()
{
    int mainNumber = readMainNumber();
    short digit = readDigitToCheck();

    cout << "\nDigit " << digit << " appears "
         << countDigitFrequency(mainNumber, digit) << " time(s).\n";

    return 0;
}
