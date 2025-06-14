#include <iostream>
using namespace std;

enum enStatus { Pass, Fail };

void readMarks(double mark[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter the mark number " << i + 1 << ":\n";
        cin >> mark[i];
    }


}

double calculateAverage(double mark[3])
{
    double average = (mark[0] + mark[1] + mark[2]) / 3;
    return average;
}

enStatus checkAverage(double average)
{
    if (average >= 50)
    {
        return Pass;
    }
    else
    {
        return Fail;
    }
}

void printStatus(enStatus status)
{
    if (status == Pass)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }


}



int main()
{
    double mark[3];
    readMarks(mark);

    printStatus(checkAverage(calculateAverage(mark)));

    return 0;
}