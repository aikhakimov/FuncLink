// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;


double (*f) (double, double);



double sum(double a, double b) {
	return a + b;
}

double mul(double a, double b) {
	return a * b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 2.0;
	double b = 2.5;
	char in;
	do {
		cout << "Введите + для сложения; * для умножения" << endl;
		cin >> in;
	} while (in != '*' && in != '+');

	if (in == '*')
		f = mul;
	else
		f = sum;

	double res = f(a, b);

	cout << a << in << b<< "=" << res;


	// часть 2
	int arr[101];



	return 0;
}