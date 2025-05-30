#include <iostream>
using namespace std;

void readStudentGrades(double x[3])
{
    cout << "Pleae enter First grade: ";
    cin >> x[0];
    cout << "Pleae enter Second grade: ";
    cin >> x[1];
    cout << "Pleae enter Third grade: ";
    cin >> x[2];
}
double printAverage(double x[3])
{
    return (x[0] + x[1] + x[2]) / 3;
    ;
}

int main()
{
    double grades[3];
    readStudentGrades(grades);
    cout << "The average of the three grades is: " << printAverage(grades) << endl;
    return 0;
}