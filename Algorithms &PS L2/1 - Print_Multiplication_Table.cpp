#include <iostream>
#include <iomanip>
using namespace std;

void printTitle(int n)
{
    cout << "\t\t\tMultiplication Table from 1 to " << n << "\n";
    cout << string(n * 7 + 6, '=') << "\n"; // خط فاصل مناسب لطول الجدول
}

void printHeader(int n, int cellWidth)
{
    cout << setw(cellWidth) << "X" << " |";
    for (int i = 1; i <= n; i++)
    {
        cout << setw(cellWidth) << i;
        if (i != n)
            cout << " |";
    }
    cout << "\n"
         << string(n * (cellWidth + 3) + 3, '-') << "\n";
}

void PrintMultiplicationTable(int n, int cellWidth)
{
    for (int i = 1; i <= n; i++)
    {
        cout << setw(cellWidth) << i << " |";
        for (int j = 1; j <= n; j++)
        {
            cout << setw(cellWidth) << i * j;
            if (j != n)
                cout << " |";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter table size (n): ";
    cin >> n;

    // حساب عرض الخلية بناءً على أكبر رقم في الجدول
    int maxNumber = n * n;
    int cellWidth = to_string(maxNumber).length() + 2;

    printTitle(n);
    printHeader(n, cellWidth);
    PrintMultiplicationTable(n, cellWidth);

    return 0;
}
