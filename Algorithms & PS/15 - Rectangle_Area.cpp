#include <iostream>
#include <limits> // For input validation

using namespace std;

const string UNIT = "cm"; // Can be changed to "m", "in", etc.

double get_positive_input(const string &prompt)
{
    double value;
    while (true)
    {
        cout << prompt;
        if (cin >> value && value > 0)
        {
            return value;
        }
        cout << "Invalid input. Please enter a positive number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void print_rectangle_details(double length, double width, double area)
{
    cout << "\nRectangle Details:\n"
         << "Length: " << length << " " << UNIT << "\n"
         << "Width: " << width << " " << UNIT << "\n"
         << "Area: " << area << " " << UNIT << "²\n";
}

double calculate_rectangle_area(double length, double width)
{
    return length * width;
}

int main()
{
    // Get dimensions with validation
    double length = get_positive_input("Enter rectangle length (" + UNIT + "): ");
    double width = get_positive_input("Enter rectangle width (" + UNIT + "): ");

    // Calculate area
    double area = calculate_rectangle_area(length, width);

    // Display results
    print_rectangle_details(length, width, area);

    return 0;
}