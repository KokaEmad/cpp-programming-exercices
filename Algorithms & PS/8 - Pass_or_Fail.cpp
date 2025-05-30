#include <iostream>
using namespace std;

double enterMark()
{
    double mark;
    cout << "Please enter mark:\n";
    cin >> mark;
    return mark;
}

void checkPass(double mark)
{
    if (mark >= 50)
    {
        cout<<"Pass\n";
    }
    else 
    {
        cout << "Fail\n";
    }
    
}

int main ()
{
    double mark = enterMark();
    checkPass(mark);
}