#include <iostream>
using namespace std;
void byVal(int x) {
    x = 10;
}
void byRef(int &x) {
    x = 10;
}
int main() {
    int a = 5;
    int b = 5;
    byVal(a);
    byRef(b);
    cout << "a: " << a << endl; // a: 5
    cout << "b: " << b << endl; // b: 10
    return 0;
}