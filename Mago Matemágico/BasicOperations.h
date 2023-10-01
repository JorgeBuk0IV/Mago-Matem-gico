#pragma once

#include "MisLibrerias.h"
class BasicOperations 
{

public:
	
	int Randomax(int min, int max) {
		return (rand() % (min - max) + 1) + max;
	}
	int Addition() {
		int a = Randomax(0, 1000);
		int b = Randomax(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese la suma de ellos: " << endl;
		cin >> result;
		if (result == a + b) {
			return true;
		}
		else
		{
			return false;
		}

	}
	int Subtraction()  {
		int a = Randomax(0, 1000);
		int b = Randomax(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese la resta de ellos: " << endl;
		cin >> result;
		if (result == a - b) {
			return true;
		}
		else
		{
			return false;
		}

	}
	int Multiplication() {
		int a = Randomax(0, 1000);
		int b = Randomax(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese el producto de ellos: " << endl;
		cin >> result;
		if (result == a * b) {
			return true;
		}
		else
		{
			return false;
		}

	}
	int Division() {
		int a = Randomax(0, 1000);
		int b = Randomax(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese la division de ellos: " << endl;
		cin >> result;
		if (result == a / b) {
			return true;
		}
		else
		{
			return false;
		}

	}
};

