#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	
	int a, b, c;

	cout << "������� ��� �����: " << endl;
	cin >> a >> b >> c;
	cout << "����� ����� a, b � c = " << a + b + c << endl;
	cout << "������������ ����� a, b � c = " << a * b * c << endl;
	cout << "������� �������������� ����� a, b � c = " << (double)(a + b + c) / 3 << endl;
}