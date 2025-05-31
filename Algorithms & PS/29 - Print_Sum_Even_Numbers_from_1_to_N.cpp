#include <iostream>
using namespace std;

int readNum()
{
    int num;
    cout << "Please enter the number N:\n";
    cin >> num;
    return num;
}

int sumEvenNums(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i += 2)
    {
        sum += i ; 
    }
    return sum ; 
}

void printSumOffEvenNums(int sum, int num)
{
    cout <<  "Sum of Even numbers from 1 to " << num << " is:  " << sum << endl;
}

int main ()
{
    int num = readNum();
    int sum = sumEvenNums(num);

    printSumOffEvenNums(sum,num);

    return 0;

}
