/*علشان الكالي هغير الارقام*/

#include <iostream>
using namespace std;

enum enScreenColor
{
    Red = 1,
    Green = 2,
    Blue = 3,
    Yellow = 4,
};

void PrintColorBackground(enScreenColor color)
{
    if (color == Red)
        cout << "\033[41m";
    else if (color == Green)
        cout << "\033[42m";
    else if (color == Blue)
        cout << "\033[44m";
    else if (color == Yellow)
        cout << "\033[43m";
    else
    {
        cout << "Incorrect choice\n";
        return;
    }

    cout << "This is your selected background color!" << endl;
    cout << "\033[0m" << endl; // Reset
}

int main()
{
    cout << "******************\n";
    cout << "Please choose the number of your color:\n";
    cout << "(1)\tRed\n";
    cout << "(2)\tGreen\n";
    cout << "(3)\tBlue\n";
    cout << "(4)\tYellow\n";
    cout << "******************\n";
    cout << "Your choice: ";

    int c;
    cin >> c;
    enScreenColor color ;
    color = (enScreenColor)c;

    PrintColorBackground(color);

    return 0;
}
