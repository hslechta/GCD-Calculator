/*
 * GCDCalculator.cpp
 *
 *  Created on: Aug 19, 2022
 *      Author: HMS
 */

#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int input_a;
	int input_b;

	cout << "Input the first number: " << endl;
	cin >> input_a;
	a = input_a;
	cout << "Input the second number: " << endl;
	cin >> input_b;
	b = input_b;

	do {
		if (input_a > input_b)
			input_a = input_a - input_b;
		else if (input_b > input_a)
			input_b = input_b - input_a;
	} while (input_a != input_b);

	cout << "The greatest common denominator of " << a << " and " << b << " is: " << input_a << endl;
}
