#include <iostream>
using namespace std;

double readGrade()
{
    double grade;
    cout << "Please enter the grade:\n";
    cin >> grade;
    return grade;
}

void printGradeLetter(double grade)
{
    if (grade >= 90 && grade <= 100)
    {
        cout << "Grade: A\n";
    }
    else if (grade >= 80)
    {
        cout << "Grade: B\n";
    }
    else if (grade >= 70)
    {
        cout << "Grade: C\n";
    }
    else if (grade >= 60)
    {
        cout << "Grade: D\n";
    }
    else if (grade >= 50)
    {
        cout << "Grade: E\n";
    }
    else if (grade >= 0)
    {
        cout << "Grade: F\n";
    }
    else
    {
        cout << "Invalid grade entered.\n";
    }
}

int main()
{
    double grade = readGrade();
    printGradeLetter(grade);
    return 0;
}
