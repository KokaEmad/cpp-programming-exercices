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
    int i = 0; 
    while (i <= num)
    {
        sum += i;
        i +=2; 
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
