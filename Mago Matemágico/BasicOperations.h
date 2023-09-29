#pragma once
#include "Wizzard.h"

class BasicOperations 
{
private:
	Wizzard* wizzard;
public:
	BasicOperations::BasicOperations(Wizzard* wizzard) {
		this->wizzard = wizzard;
	}

	void Addition() {
		int a = wizzard->Randomix(0, 1000);
		int b = wizzard->Randomix(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese la suma de ellos: " << endl;
		cin >> result;
		if (result == a + b) {
			wizzard->SetPoints(wizzard->GetPoints() + 1);
		}
		else
		{
			wizzard->Damage();
		}
	}
	void Subtraction() {
		int a = wizzard->Randomix(0, 1000);
		int b = wizzard->Randomix(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese la resta de ellos: " << endl;
		cin >> result;
		if (result == a - b) {
			wizzard->SetPoints(wizzard->GetPoints() + 1);
		}
		else
		{
			wizzard->Damage();
		}
	}
	void Multiplication() {
		int a = wizzard->Randomix(0, 1000);
		int b = wizzard->Randomix(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese el producto de ellos: " << endl;
		cin >> result;
		if (result == a * b) {
			wizzard->SetPoints(wizzard->GetPoints() + 1);
		}
		else
		{
			wizzard->Damage();
		}
	}
	void Division() {
		int a = wizzard->Randomix(0, 1000);
		int b = wizzard->Randomix(0, 1000);
		int result;
		cout << "Tienes dos números " << a << " y " << b << " ingrese la division de ellos: " << endl;
		cin >> result;
		if (result == a / b) {
			wizzard->SetPoints(wizzard->GetPoints() + 1);
		}
		else
		{
			wizzard->Damage();
		}
	}
};

