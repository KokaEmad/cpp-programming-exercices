#include <iostream>
using namespace std;

int main()

{
    int grade[3];
    cout << "Please grade 1:\n";
    cin>> grade[0];
    cout << "Please grade 2:\n";
    cin >> grade[1];
    cout << "Please grade 3:\n";
    cin >> grade[2];
    double average = (grade[0] + grade[1] + grade[2]) / 3.0;
    cout << "The average is: " << average<< endl;
}