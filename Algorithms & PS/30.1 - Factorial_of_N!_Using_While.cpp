#include <iostream>
using namespace std;

int readPositiveNum()
{
    int num;
   
    cout << "Please enter the number N:\n";
    cin >> num;
    if (num < 0)
    {
        cout << "Invaild Number!\n";
        return readPositiveNum();
    }

    return num;
}



int calculateFactorial(int num)
{
    int factorial = 1; // ✅ التهيئة هنا مهمة جدًا
    int i = 1 ;
    while (i <= num )
    {
        factorial *= i ; 
        i ++;
    }
    


    return factorial;
}

void printFactorial(int factorial, int num)
{
    cout << "Factorial of " << num << " is:  " << factorial << endl;
}

int main()
{
    int num = readPositiveNum();
    int factorial = calculateFactorial(num);

    printFactorial(factorial, num);

    return 0;
}
