#include <iostream>
using namespace std;

int readNum()
{
    int num;
    cout << "Please enter the number N:\n";
    cin >> num;
    return num;
}

int sumOddNums(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i += 2)
    {
        sum += i ; 
    }
    return sum ; 
}

void printSumOffOddNums(int sum , int num)
{
    cout <<  "Sum of odd numbers from 1 to " << num << " is:  " << sum << endl;
}

int main ()
{
    int num = readNum();
    int sum = sumOddNums(num);

    printSumOffOddNums(sum,num);

    return 0;

}
