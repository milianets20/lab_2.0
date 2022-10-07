// Lab_02.cpp
// < Мілянець Мар`ян >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 20
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m; // вхідний параметр
	double n; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt((pow(m, 3)) * n) + n * m + pow(m, 2) - m);
	z2 = (sqrt(m) - sqrt(n)) / m;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}