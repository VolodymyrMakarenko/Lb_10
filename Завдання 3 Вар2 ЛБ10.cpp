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
    double a, z1, z2;
    const double p = 3.1415926;
    cout << "Варіант 2" << "\n";
    cout << "Введыть a: ";
    cin >> a;
    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    cout << "z1: " << z1 << "\n";
    z2 = 2 * sqrt(2) * cos(a) * sin((p / 4) + 2 * a);
    cout << "z2: " << z2 << "\n";




}
