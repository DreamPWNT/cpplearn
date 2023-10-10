#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a = 1, b;

	b = ++a*a++;
	cout << b << endl;
	cout << a << endl;
}