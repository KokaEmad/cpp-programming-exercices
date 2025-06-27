#include <iostream>
using namespace std;

void print_All_From_AAA_to_ZZZ()
{
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char k = 'A'; k <= 'Z'; k++)
            {
                cout << i << j << k << "\n";
            }
        }
    }
}

int main()
{
    print_All_From_AAA_to_ZZZ();
    return 0;
}
