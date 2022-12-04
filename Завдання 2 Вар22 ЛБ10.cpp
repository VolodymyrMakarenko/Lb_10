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
	cout << "Варіант 22\n";
	int i = 22;
	double ab = sqrt(pow(i - 0, 2) + pow(i - 1 - 0, 2));
	cout << "Сторона AB: " << ab << "\n";
	double bc = sqrt(pow(i + i, 2) + pow(i + 1 - i - 1, 2));
	cout << "Сторона BC: " << bc << "\n";
	double ca = sqrt(pow(-i - 0, 2) + pow(i + 1 - 0, 2));
	cout << "Сторона CA: " << ca << "\n";
	double m = sqrt(2 * pow(bc, 2) + 2 * pow(ab, 2) - pow(ca, 2)) / 2;
	cout << "Медіанна Mb: " << m << "\n";
	double p = (ab + bc + ca) / 2;
	double R = sqrt(((p - ab) * (p - bc) * (p - ca))/p);
	cout << "Радіус вписаного кола R: " << R << "\n";
}


