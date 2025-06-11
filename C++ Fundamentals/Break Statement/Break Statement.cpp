#include <iostream>
using namespace std;

void foundNumWithoutBreak()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 20, 80, 90, 100};

    for (int i = 0; i <= 10; i++)
    {
        cout << "We are at iteration " << i + 1 << endl;
        if (arr[i] == 20)
        {
            cout << "\n"<< "We found 20 at postion  " << i + 1 << "\n" << endl;
        }
    }
}
void foundNumWithBreak()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 20, 80, 90, 100};

    for (int i = 0; i <= 10; i++)
    {
        cout << "We are at iteration " << i + 1 << endl;
        if (arr[i] == 20)
        {
            cout << "\n" << "We found 20 at postion  " << i + 1 <<"\n"<< endl;
            break;
        }
    }
}

int main()
{
     foundNumWithoutBreak();
}