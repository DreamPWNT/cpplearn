#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int a, b, c;

	cout << "Введите три числа: " << endl;
	cin >> a >> b >> c;
	cout << "Сумма чисел a, b и c = " << a + b + c << endl;
	cout << "Произведение чисел a, b и c = " << a * b * c << endl;
	cout << "Среднее арифметическое чисел a, b и c = " << (double)(a + b + c) / 3 << endl;
}