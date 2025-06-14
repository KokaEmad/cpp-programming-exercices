#include <iostream>
using namespace std;


void readNums(double& a, double& b)
{
    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;
}
void swapFunction(double& a , double& b)
{
    double temp = a;
    a = b;
    b = temp;
}

void printNums(double a, double b)
{

    cout << "\n After swapping : \n"
        << "a = " << a << "\n"
        << "b = " << b << "\n";
}
int main()
{
    double a, b;



    readNums(a,b);
    printNums(a, b);
    swapFunction(a,b);
    printNums(a,b);


    return 0;
}

/*


#include <iostream>
#include <utility> // For std::swap
using namespace std;

int main()
{
    double a, b;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    swap(a, b); // Standard library swap

    cout << "\nAfter swapping:\n"
         << "a = " << a << "\n"
         << "b = " << b << "\n";

    return 0;
}

*/