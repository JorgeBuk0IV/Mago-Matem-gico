#pragma once
#include "GameObject.h"
class Potion : public GameObject
{
public:
	Potion() {
		width = 5;
		height = 2;
		x = rand() % (ANCHO - width);
		y = rand() % (ALTO - height);
	}

	void Show() {
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(x, y + 0); cout << " [] ";
		Console::ForegroundColor = ConsoleColor::Red;
		Console::SetCursorPosition(x, y + 1); cout << "[__]";
	}
};


