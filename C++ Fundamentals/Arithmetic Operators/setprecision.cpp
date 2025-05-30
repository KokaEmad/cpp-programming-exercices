#include <iostream>
#include <iomanip> // مكتبة iomanip تحتوي على دالة setprecision
using namespace std;

int main()
{
    double number = 3.14159265358979;

    cout << "بدون setprecision: " << number << "\n";                              // سيعرض كل الأرقام العشرية
    cout << fixed << setprecision(2) << "مع setprecision(2): " << number << "\n"; // سيعرض رقمين عشريين فقط

    return 0;
}
