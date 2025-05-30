#include <iostream> 
using namespace std; 
int main()
{
  
        cout << "Triangle Area Calculator\n";

        double base, height;
        

        cout << "Enter the base : \n";
        cin >> base ;

        cout << "Enter the height : \n";
        cin >> height ;

        double area = 0.5 * base * height;

        cout << "The area of the triangle is: " << area << "\n" ;

        return 0;

    }