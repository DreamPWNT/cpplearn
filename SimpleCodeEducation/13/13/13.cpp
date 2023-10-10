#include <iostream>

using namespace std;

int main()
{
	int operand1;
	int operand2;
	char operation;
	
	cout << "Enter first number" << endl;
	cin >> operand1;
	cout << "Enter second number" << endl;
	cin >> operand2;
	cout << "Enter mathemathic operation (+, -, *, /)" << endl;
	cin >> operation;

	switch (operation)
	{
		case '+':

			cout << "Sum of " <<operand1 << " and " << operand2 << " = " << (operand1 + operand2) << endl;
		
		break;

		case '-':

			cout << "Substraction of " << operand1 << " and " << operand2 << " = " << (operand1 - operand2) << endl;

		break;

		case '*':

			cout << "Multiplication of " << operand1 << " and " << operand2 << " = " << (operand1 * operand2) << endl;

		break;

		case '/':

			cout << "Division of " << operand1 << " and " << operand2 << " = " << (operand1 / operand2) << endl;

		break;

		default:
				
			cout << "Unknown operation Oo";
	}
}