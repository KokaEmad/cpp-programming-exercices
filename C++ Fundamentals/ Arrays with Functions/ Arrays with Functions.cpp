#include<iostream>
using namespace std;

void readArrayData(int x[3])
{
    cout << "Pleae enter First number: ";
    cin >> x[0];
    cout << "Pleae enter Second number: ";
    cin >> x[1];
    cout << "Pleae enter Third number: ";
    cin >> x[2];

}
void printArrayData(int x[3])
{
    cout << "First number: " << x[0] << endl;
    cout << "Second number: " << x[1] << endl;
    cout << "Third number: " << x[2] << endl;
}
int main()
{
    int x[3];
    readArrayData(x);
    printArrayData(x);
    cout << "The address of the first element is: " << &x[0] << endl;
    return 0;
}