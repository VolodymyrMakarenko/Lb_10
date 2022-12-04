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
	double x, y=0;
	cout << "Варіант 22 \nВведіть значення параметру x: ";
	cin >> x;
	if (cos(4 * x) == 0)
	{
		cout << "x не задовольняє область визначення";
		return 0;
	}
	else if (sin(x) == 0)
	{
		cout << "x не задовольняє область визначення";
		return 0;
	}
	else if (cos(x) == 0)
	{
		cout << "x не задовольняє область визначення";
		return 0;
	}
	y = log10((((cos(5 * x)) / sin(x)) + ((sin(5 * x)) / cos(x))) * ((sin(10 * x) - sin(6 * x)) / cos(4 * x)));
	cout << "Значення виразу: " << y;


}
