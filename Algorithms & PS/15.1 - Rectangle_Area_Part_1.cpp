#include <iostream>
#include <limits> // For input validation

using namespace std;


double calculate_rectangle_area(double length, double width)
{
    return length * width;
}

int main()
{
    double length ;
    double width ;

    cout << "Please enter length \n";
    cin >> length;
    cout << "Please enter width \n";
    cin >> width;

    cout <<"Area = "<< calculate_rectangle_area(length,width)<< endl;

    return 0;
}