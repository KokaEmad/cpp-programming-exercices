#include <iostream>
#include <limits> // For numeric_limits
using namespace std;



struct info {
    string name;
    int age;
    string city;
    string country;
    float monthlySalary;
    float yearlySalary;
};

int main() {

    enum enGender
    {
        male,
        female
    };
    enum enStatus
    {
        married,
        single
    };

    info info1;

    // الحصول على بيانات المستخدم
    cout << "Please enter your name: ";
    getline(cin, info1.name);

    cout << "Please enter your age: ";
    cin >> info1.age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // مسح المدخلات المتبقية

    cout << "Please enter your city: ";
    getline(cin, info1.city);

    cout << "Please enter your country: ";
    getline(cin, info1.country);

    cout << "Please enter your monthly salary: ";
    cin >> info1.monthlySalary;

    cout << "Please enter your yearly salary: ";
    cin >> info1.yearlySalary;

    // طباعة البيانات
    cout << "\n******************************\n";
    cout << "Name            : " << info1.name << endl;
    cout << "Age             : " << info1.age << endl;
    cout << "City            : " << info1.city << endl;
    cout << "Country         : " << info1.country << endl;
    cout << "Monthly Salary  : " << info1.monthlySalary << endl;
    cout << "Yearly Salary   : " << info1.yearlySalary << endl;
    
    // طباعة الجنس باستخدام الأرقام فقط
    cout << "Gender          : " << male << endl;
    
    // طباعة حالة الزواج باستخدام الأرقام فقط
    cout << "Married         : " << single << endl;
    cout << "******************************\n";

    return 0;
}
