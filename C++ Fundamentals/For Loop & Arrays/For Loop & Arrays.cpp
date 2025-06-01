#include <iostream>
using namespace std;

void readArrayData(int Arr[100], int &length)
{
    cout << "Enter how many number you want to enter : (from 1 : 100)\n";
    cin >> length ; 

    for (int  i = 0 ;i < length ; i++ )
    {
        cout << "Please enter number " << i+1 << endl;
        cin >> Arr[i] ; 
    }
    
}
void printArrayData(int Arr[100], int length)
{

    for (int i = 0; i < length; i++)
    {
        cout << "Number " << i+1 <<" is "<< Arr[i] << endl;
    }
}
float sumOfArray(int Arr[100], int length)
{
    float sum = 0 ;
    for (int i = 0; i < length ; i++)
    {
        sum += Arr[i];
    }

    return sum;
}

float averageOfArray(int Arr[100], int length)
{
    return sumOfArray(Arr, length) / length;
}

int main()
{
    int arr[100];
    int length = 0 ; 
    readArrayData(arr,length);
    printArrayData(arr, length);
    cout << "Sum = " << sumOfArray(arr,length) << endl;
    cout << "Average = " << averageOfArray(arr, length) << endl;
}