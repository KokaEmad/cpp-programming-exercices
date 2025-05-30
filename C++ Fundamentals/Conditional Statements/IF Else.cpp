#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    if (x>=5 && x>20)
    {
        cout << "The code if of body has excuted.\n";
    }
    else
    {
        cout << "The code else  of body has excuted." << endl;
    }

    cout << "The code after if of body has always excuted." << endl;

    return 0;
}
