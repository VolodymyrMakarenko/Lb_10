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
    int h, d, sh;
    cout << "Скільки годин на добу ви спите ?" << "\n";
    cin >> h;
    d = 18 * 364 + 57 * 365;
    sh = d * h;
    cout << "Ви проспите за все життя " << sh << " годин" << "\n";

}
