#include <iostream>
#include <math.h>
#include <conio.h>
#include <Windows.h>
 
using namespace std;

double v(double p)
{
	return 3 * p*p - 2 * p - 10;
}

double vv(double w)
{
	return 6 * w - 2;
}

double f(double y)
{
	return pow(y, 3) + 2 * pow(y, 2) - 10 * y - 8;
}

void main()
{
	int n = 0;
	double a, b, eps, c;
	//отрезок
	cout << "a="; cin >> a; cout << "b=";cin >> b;
	//точность
	cout << "eps=";cin >> eps;
	//начальная точка
	//const double b1 = b;
	if (v(a) > 0 && vv(a) > 0) {}
	else cerr << "Bad points";
	do {
		a = a - (f(a) / (f(b) - f(a)))*(b - a);

		//Метод хорд на каждом шаге применяется к новому отрезку
		b = b - (f(b) / v(b));
		//кол-во итераций
		n += 1;

		if (v(a)*vv(a) > 0) c = b;	else c = a;
		cout << "x=" << c << endl;
		cout << "iterations=" << n << endl;
		//Sleep(2000);
	} while (fabs(b - a) >= eps);


}