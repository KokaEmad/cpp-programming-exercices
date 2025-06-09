#include <iostream>
using namespace std;


int readIntNumberInRange(int from , int end)
{
    int number ;
    cin  >> number ;
    while (number < from || number > end  )
    {
        cout << "Wrong";
        cin >> number;

    }
     
    return number;

}

int main()
{
   cout << readIntNumberInRange(20,30);
}

/* int main () */
/* {
    int n ;
    cin >> n;

    while (n <=0)
    {
        cout << "wrong\n";
        cin >> n;
    }

    if (n <= 0)
    {
        cout << "wrong\n";
        cin >> n;
    }
} */