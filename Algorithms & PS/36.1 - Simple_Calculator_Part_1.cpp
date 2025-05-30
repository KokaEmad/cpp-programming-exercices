#include <iostream>
using namespace std;

// Function to read numbers and operator
void readNumbers(double &num1, double &num2, char &op)
{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;
}

// Function to calculate and print result
void calculate(double num1, double num2, char op)
{
    switch (op)
    {
    case '+':
        cout << "Result = " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result = " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result = " << num1 * num2 << endl;
        break;
    case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
                
        break;
    default:
        cout << "Invalid operator!" << endl;
        break;
    }

}

int main()
{
    double num1, num2;
    char op;

    readNumbers(num1, num2, op);
    calculate(num1, num2, op);

    return 0;
}
