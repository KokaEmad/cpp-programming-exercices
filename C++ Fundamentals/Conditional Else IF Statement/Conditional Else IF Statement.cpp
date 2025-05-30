#include <iostream>
using namespace std;

int main()
{
    int time = 22;

    if (time < 12)
    {
        cout<<"Good morning.\n";
    }
    else if (time < 20 )
    {
        cout << "Good day.\n";
    }
    else
    {
        cout << "Good evening.\n";
    }
    

    return 0;
}