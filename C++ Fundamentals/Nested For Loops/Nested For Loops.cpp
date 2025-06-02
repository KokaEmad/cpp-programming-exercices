#include <iostream>
using namespace std ;



void printMultiplicationTable()
{
    for(int i = 1 ; i <=10 ; i++)
    {
        cout << " I = " << i << endl;
        for (int j = 1; j <= 10 ; j++)
        {
            cout << i << " * " << j << " = " << i*j << endl ;
        }
        cout << "\n***********************\n";
    }
}
void printSquare()
{
    for (int i = 1;  i <=10 ; i++)
    {
        for (int  j = 1; j <= 10; j++)
        {
            cout << "*";
        }
        cout << "\n";
        
    }
}
void printTriangleFromDown()
{
    
        for (int i = 1; i <= 10; i++)
        {
            for (int j = i ; j <= 10; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    
}
void printTriangleFromUp()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j<=i; j++ )
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void printAllLetterPairs()
{
    for (int i = 65; i <= 90; ++i) // ASCII codes for 'A' to 'Z'
    {
        cout << "with Letter : " << char(i) << endl<< "\n";
        
        for (int j = 65; j <= 90; ++j)
        {
            cout << char(i);
            cout << char(j);
            cout << endl;
        }
        cout << endl;
        
    }
    
}
void printRightAlignedNumberPyramid()
{
    for(int i = 1 ; i<=10 ;i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printRightAlignedNumberTriangleFromTop()
{
    for (int i = 10; i >= 1 ; i--)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}
void printAlphabetTriangle()
{
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 65; j < 65+i; j++)
        {
            cout << char(j) << " ";
        }
        cout << endl;
    }
}
void printNumberPrefixShift()
{
    for (int i = 1; i <= 10 ; i++)
    {
        for (int  j = i ; j <= 10 ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        
    }
    
}







int main()

{
    return 0;
}