#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    double temp = a ;
    a = b ; 
    b = temp ;

    cout << "\n After swapping : \n"
         << "a = " << a << "\n"
         << "b = " << b << "\n";
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