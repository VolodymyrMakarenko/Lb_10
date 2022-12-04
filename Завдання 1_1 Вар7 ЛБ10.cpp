#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int d = 0, m = 0, y = 0, D = 0, M = 0, Y = 0, rd = 0, rm = 0, ry = 0;
    D, d <= 30;
    M, m <= 12;
    Y <= y;
    cout << "Введіть поточний день ";
    cin >> d;
    cout << "Введіть поточний місяць ";
    cin >> m;
    cout << "Введіть поточний рік ";
    cin >> y;
    cout << "Введіть день народження ";
    cin >> D;
    cout << "Введіть місяць народження ";
    cin >> M;
    cout << "Введіть рік народження ";
    cin >> Y;
    if (D > d)
    {
        rd = (30 + d) - D;

    }
    else if (D < d)
    {
        rd = d - D;
    }
    else
    {
        rd = 0;
    }
    if (M > m)
    {
        rm = m + (12 - M);

    }
    else if (M < m, D>d)
    {
        rm = (m - M) - 1;
    }
    else if (M < m)
    {
        rm = m - M;
    }
    else rm = 0;
    if (M > m)
    {
        ry = (y - Y) - 1;
    }
    else ry = y - Y;
    cout << "Вам " << ry << " років " << rm << " місяців " << rd << " днів" << "\n";


}