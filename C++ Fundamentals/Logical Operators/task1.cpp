#include <iostream>

using namespace std ; 

int main ()
{
    cout << "12>=12 : " << (12 >= 12)<<endl;
    cout << "12 > 7 : " << (12 > 7) << endl;
    cout << "8 < 6 : " << (8 < 6) << endl;
    cout << "8 = 8 : " << (8 == 8) << endl;
    cout << "12 <= 12 :  " << (12 <= 12) << endl;
    cout << "7 == 5 : " << (7 == 5) << endl;
    cout << "----------------------------";
    cout << "Not 12>=12 : " << !(12 >= 12) << endl;
    cout << "Not 12 > 7 : " << !(12 > 7) << endl;
    cout << "Not 8 < 6 : " << !(8 < 6) << endl;
    cout << "Not 8 = 8 : " << !(8 == 8) << endl;
    cout << "Not 12 <= 12 :  " << !(12 <= 12) << endl;
    cout << "Not 7 == 5 : " << !(7 == 5) << endl;
    cout << "----------------------------";
    cout << "1 AND 1 : " << (1 && 1) <<endl;
    cout << "True AND 0 : " << (true && 0)<<endl;
    cout << "0 OR 1 : " << (0 || 1) << endl;
    cout << "0 OR 0 : " << (0 || 0) << endl;
    cout << "NOT 0 :  " << (! 0 ) << endl;
    cout << "NOT (1 OR 0 ) : " << !(1 || 0) << endl;
    cout << "----------------------------";
    
}