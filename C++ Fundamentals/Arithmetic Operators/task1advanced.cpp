#include <iostream>
#include <cmath>   // For fmod
#include <iomanip> // For setprecision
using namespace std;

// Function to display the menu
void displayMenu()
{
    cout << "\n====== Calculator Menu ======\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Modulus (fmod)\n";
    cout << "6. Change numbers\n";
    cout << "7. Exit\n";
    cout << "Choose an option [1-7]: ";
}

int main()
{
    double A = 0.0, B = 0.0;
    int choice;

    // Input numbers initially
    cout << "🔢 Enter the first number (A): ";
    cin >> A;

    cout << "🔢 Enter the second number (B): ";
    cin >> B;

    do
    {
        displayMenu();
        cin >> choice;

        cout << fixed << setprecision(2); // Display results with 2 decimal places

        switch (choice)
        {
        case 1:
            cout << "✅ Result: " << A << " + " << B << " = " << A + B << "\n";
            break;
        case 2:
            cout << "✅ Result: " << A << " - " << B << " = " << A - B << "\n";
            break;
        case 3:
            cout << "✅ Result: " << A << " * " << B << " = " << A * B << "\n";
            break;
        case 4:
            if (B != 0)
            {
                cout << "✅ Result: " << A << " / " << B << " = " << A / B << "\n";
            }
            else
            {
                cout << "⚠️ Error: Cannot divide by zero.\n";
            }
            break;
        case 5:
            if (B != 0)
            {
                cout << "✅ Result: fmod(" << A << ", " << B << ") = " << fmod(A, B) << "\n";
            }
            else
            {
                cout << "⚠️ Error: Cannot perform modulus by zero.\n";
            }
            break;
        case 6:
            cout << "\n🔄 Changing numbers...\n";
            cout << "Enter the new value for A: ";
            cin >> A;
            cout << "Enter the new value for B: ";
            cin >> B;
            break;
        case 7:
            cout << "\n👋 Exiting calculator. Have a great day!\n";
            break;
        default:
            cout << "❌ Invalid choice. Please select a number from 1 to 7.\n";
        }

    } while (choice != 7);

    return 0;
}
