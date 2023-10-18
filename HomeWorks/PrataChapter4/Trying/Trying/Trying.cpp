#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <array>

using namespace std;

int main()
{
	/*
	const int size = 20;
	char name[size];
	char drink[size];

	cout << "Enter full name: ";
	cin.getline(name,size);
	cout << "Enter favorite drink: ";
	cin.getline(drink, size);
	cout << "Your name is " << name << ", your favorite drink is " << drink;

	char char1[size];
	string str1;

	cout << "Initial length of char array = " << strlen(char1)
				<< endl;
	cout << "Initial length of string = " << str1.size() << endl;

	cout << "Enter char string (maximum size = " << size << "): ";
	cin.getline(char1, size);
	cout << "You entered char string: " << char1 << endl;

	cout << "Enter class string: ";
	getline(cin, str1);
	cout << "You entered class string: " << str1 << endl;

	cout << "Finish length of char array = " << strlen(char1)
		<< endl;
	cout << "Finish length of string = " << str1.size() << endl;
	

	
	struct db_conn {
		string login;
		string password;
		string dbname;
		int timeout;
	};

	db_conn con_dt[3] = 
	{
		{"admin","qwerty","dt",60},
		{"admin","qwerty","delivery",60},
		{"admin","qwerty","trainmodel",133}
	};

	cout << "You are successfully connected to db: " << con_dt[2].dbname << " with login: " << con_dt[1].login << " and password: " << con_dt[0].password << " on timeout: " << con_dt[2].timeout << " seconds. ";

	union a {
		double b;
		int c;
	} a1;

	a1.b = 1.31;
	a1.c = 45;

	cout << "Union float is: " << a1.b << ", union int is: " << a1.c << endl;

	

	int a = 124;
	float b = 33.333333;

	cout << "Value of a = " << a << ", adress of a = " << &a << endl;
	cout << "Value of b = " << b << ", adress of b = " << &b << endl;

	*/

	int num = 234;
	int* pnum;

	pnum = &num;

	cout << "num value = " << num << ", pnum value = " << *pnum << endl;
	cout << "num adress = " << &num << ", pnum adress = " << pnum << endl;

	*pnum = *pnum + 100;

	cout << "new num value = " << num << ", new pnum value = " << *pnum << endl;
	cout << "new num adress = " << &num << ", new pnum adress = " << pnum << endl;

	num++;

	cout << "new num value = " << num << ", new pnum adress = " << &num << endl;

	int a = 321;
	int* b = new int;
	*b = 4321452;

	cout << "Value of a = " << a << " location = " << &a << endl;
	cout << "Value of b = " << *b << " location = " << b << endl;

	double* c = new double;
	*c = 4.364332;

	cout << "Value of c = " << *c << " location = " << c << endl;
	cout << "Value sizes: a = " << sizeof(a) << ", b = " << sizeof(*b) << ", c = " << sizeof(*c) << endl;
	cout << "Pointer sizes: a = " << sizeof(&a) << ", b = " << sizeof(b) << ", c = " << sizeof(c) << endl;
	cout << "Pointer locations: a = " << &a << ", b = " << &b << ", c = " << &c << endl;

	double* arr1 = new double[20];
	arr1[0] = 11.11;

	cout << "0 element of array " << arr1[0] << endl;

	int arr2[] = { 4,5,6,7,3 };

	cout << "arr2 = " << arr2 << endl;
	cout << "&arr2 = " << &arr2 << endl;

	int* parr2 = arr2;

	cout << "parr2 = " << parr2 << endl;

	parr2 = parr2 + 2;

	cout << "arr2[2] = " << *parr2 << endl;

	char arr3[5];

	cout << "sizeof arr3 = " << sizeof(*arr3) << endl;
	cout << "sizeof &arr3 = " << sizeof(*(&arr3)) << endl;

	const char* str1 = "vodka";
	char str2[20] = "seledka";

	cout << "str1 : " << str1 << endl;
	cout << "str1 adress: " << (int*)str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str2 adress: " << (int*)str2 << endl;

	struct pgbouncer {
		int connections_quantity;
	};

	pgbouncer con1, con2, con3;

	con1.connections_quantity = 100;

	cout << "con1 connections = " << con1.connections_quantity << endl;

	pgbouncer* pcon1 = &con2;

	pcon1->connections_quantity = 250;

	cout << "con2 connections = " << pcon1->connections_quantity << endl;

	pgbouncer connections[3];

	connections[0].connections_quantity = 1000;

	cout << "Connections 0 structure connection quantity = " << connections[0].connections_quantity << endl;

	const pgbouncer* pconnections[3] = { &con1, &con2, &con3 };

	cout << "Connections quantity in potiner connections array on element 2 = " << pconnections[0]->connections_quantity << endl;

	const pgbouncer** pcons = pconnections;

	cout << "Connections quantity in potiner connections array on element 1 = " <<  (*(pcons + 1))->connections_quantity << endl;

	double a1[4] = {2.4,3.7,6.8,9.9};
	vector<double> a2 = { 1.7,9.2,5.8,3.8 };
	array<double, 4> a3 = { 8.3,7.3,9.1,3.3 };

	cout << "a1[3] = " << a1[3] << " at " << &a1[3] << endl;
	cout << "a2[3] = " << a2[3] << " at " << &a2[3] << endl;
	cout << "a3[3] = " << a3[3] << " at " << &a3[3] << endl;

	int a = 1;
} 
