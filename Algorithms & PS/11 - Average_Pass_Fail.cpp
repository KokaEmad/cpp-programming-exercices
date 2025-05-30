#include <iostream>
using namespace std;

void readMarks(double mark[3])
{
    cout << "Please enter first mark :\n";
    cin >> mark[0];
    cout << "Please enter second mark :\n";
    cin >> mark[1];
    cout << "Please enter third mark :\n";
    cin >> mark[2];
}

double calculateAverage(double mark[3])
{
    double average =( mark[0] + mark[1] + mark[2] )/3 ;
    return average;
}

void printStatus(double average)
    {
    
        if (average>=50)
        {
            cout<<"PASS";
        }
        else
        {
            cout << "FAIL";
        }
    }
    


int main()
{
    double mark[3];
    readMarks(mark);
    double average = calculateAverage(mark);

    cout << average << endl;
    printStatus(average);

    return 0;
}