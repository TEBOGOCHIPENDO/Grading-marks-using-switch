// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main() {
	double firstnumber, secondnumber, result;
	int Operator;

	cout << "Enter two numbers " << endl;
	cin >> firstnumber >>secondnumber;

	cout << "Choose the operator which you want to use" << endl;
	cout << "1: addition" << endl;
	cout << "2: subtraction" << endl;
	cout << "3: multiplication" << endl;
	cout << "4: division" << endl;
	cin >> Operator;

	switch (Operator) {
	case 1:
		result = firstnumber + secondnumber;
		cout << "The addition of" << firstnumber << " and " << secondnumber << " is equals to" << result;
		break;

	case 2:
		result = firstnumber - secondnumber;
		cout << firstnumber << " subtracted by" << secondnumber << "is equals to " << result;
		break;

	case 3:
		result = firstnumber * secondnumber;
		cout << firstnumber << " multiplied by " << secondnumber << " is equals to " << result;
		break;

	case 4:
		if (secondnumber == 0) {
			cout << "You can't divide by zero please enter another number" << endl;
			cin >> secondnumber;

		}
		result = firstnumber / secondnumber;
		cout << firstnumber << " divided by " << secondnumber << " is equals to " << result;
		break;

	default:
		cout << "Invalid operator, Please choose a correct operator";

		return 0;

	}