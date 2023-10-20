#include <iostream>
#include <array>
#include <string>

using namespace std;

void main()
{
	// ======================================== Excercise 1 ========================================

	int a, b;
	int sum = 0;

	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	for (int i = a; i <= b; i++)
	{
		sum += i;
	}

	cout << "Summ of range " << a << " and " << b << " = " << sum << endl;

	// ======================================== Excercise 2 ========================================

	const int size = 101;
	long long result = 0;

	array<long double, size> elements;

	elements[0] = elements[1] = 1;

	cout << "0! = " << elements[0] << endl;
	cout << "1! = " << elements[1] << endl;

	for (int i = 2; i < elements.size(); i++)
	{
		elements[i] = i * elements[i - 1];

		cout << i << "! = " << elements[i] << endl;
	}

	// ======================================== Excercise 3 ========================================

	int number;
	int sum = 0;

	cin >> number;
	while (number != 0)
	{
		sum += number;
		cout << number << ", sum = " << sum << endl;
		cin >> number;
	}

	// ======================================== Excercise 4 ========================================

	const int initial_sum = 100;
	const double dafna_percent = 0.1;
	const double cleo_percent = 0.05;

	int year = 1;

	cout << "Year\t" << "Dafna Sum\t" << "Cleo Sum" << endl;

	for (double dafna_sum = initial_sum, cleo_sum = initial_sum; cleo_sum <= dafna_sum; year++)
	{
		dafna_sum += initial_sum * dafna_percent;
		cleo_sum += cleo_sum * cleo_percent;

		cout << year << "\t" << dafna_sum << "\t\t" << cleo_sum << endl;
	}

	// ======================================== Excercise 5 ========================================

	const int month_size = 12;
	const char* monthes[month_size] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"Jule",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	int sales_volume[12];
	int year_sales_sum = 0;

	for (int i = 0; i < month_size; i++)
	{
		cout << "Enter sales value of " << monthes[i] << ": ";
		cin >> sales_volume[i];
		year_sales_sum += sales_volume[i];
	}

	cout << "Thank you! Year sales were " << year_sales_sum << endl;

	// ======================================== Excercise 6 ========================================

	const int month_size = 12;
	const char* monthes[month_size] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"Jule",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	const int years = 3;

	int sales_volume[years][12];
	int year_sales_sum = 0;
	int full_sum = 0;

	for (int year = 0; year < years; year++)
	{
		cout << "Enter sales of year " << (year + 1) << endl;

		for (int month = 0; month < month_size; month++)
		{
			cout << "Enter sales value of " << monthes[month] << ": ";
			cin >> sales_volume[year][month];
		}
	}

	for (int year = 0; year < years; year++)
	{
		int year_sum = 0;

		cout << "Sales for year " << (year + 1) << " were: ";

		for (int month = 0; month < month_size; month++)
		{
			year_sum += sales_volume[year][month];
		}

		cout << year_sum << endl;

		full_sum += year_sum;
	}

	cout << "Full sales were: " << full_sum;

	// ======================================== Excercise 7 ========================================

	struct automobile {
		string manufacturer;
		int issue_year;
	};

	int automobile_quantity;

	cout << "Enter a quantity of automobiles: ";
	cin >> automobile_quantity;
	cin.get();

	automobile* automobiles = new automobile[automobile_quantity];

	for (int i = 0; i < automobile_quantity; i++)
	{
		cout << "Automobile #" << (i + 1) << endl;

		cout << "Enter a automobile manufacturer: ";
		getline(cin,automobiles[i].manufacturer);
		cout << "Enter a automobile issue year: ";
		cin >> automobiles[i].issue_year;
		cin.get();
	}

	cout << "It is your collecion:" << endl;

	for (int i = 0; i < automobile_quantity; i++)
	{
		cout << automobiles[i].issue_year << " " << automobiles[i].manufacturer << endl;
	}
	
	// ======================================== Excercise 8 ========================================

	char word[20];
	int counter = 0;

	cout << "Enter a words (for exit write 'done'): ";
	cin >> word;

	while (strcmp(word, "done"))
	{
		cin >> word;
		counter++;
	}

	cout << "You wrote " << counter << " words";

	// ======================================== Excercise 9 ========================================

	string word;
	int counter = 0;

	cout << "Enter a words (for exit write 'done'): ";
	cin >> word;

	while (word != "done")
	{
		cin >> word;
		counter++;
	}

	cout << "You wrote " << counter << " words";

	// ======================================== Excercise 10 ========================================

	const char symbol1 = '*';
	const char symbol2 = '.';

	int size;

	cout << "Enter square size: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int k = size - i - 1; k > 0; k--)
		{
			cout << symbol2;
		}

		for (int j = i + 1; j > 0; j--)
		{
			cout << symbol1;
		}

		cout << endl;
	}
}


