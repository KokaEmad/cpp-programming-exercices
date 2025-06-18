#include <iostream>
using namespace std;

enum enPrimeOrNot
{
    Prime = 1,
    NotPrime = 2
};

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

// Function to check if number is prime using i*i <= n
enPrimeOrNot CheckPrime(int number)
{
    if (number <= 1)
        return NotPrime;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return NotPrime;
    }
    return Prime;
}

void PrintPrimeNumbersFrom1ToN(int N)
{
    cout << "\nPrime numbers from 1 to " << N << " are:\n";
    for (int i = 1; i <= N; i++)
    {
        if (CheckPrime(i) == Prime)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int number = ReadPositiveNumber("Please enter a positive number: ");
    PrintPrimeNumbersFrom1ToN(number);
    return 0;
}
