#pragma once
#include "GameObject.h"
#include "BasicOperations.h"
class Gems : public GameObject
{

public:
	Gems() {
		width = 4;
		height = 2;
		x = Randomix(Console::WindowWidth - width, -1);
		y = Randomix(Console::WindowHeight / 2, Console::WindowTop);
	}
	void Show() {
		Console::ForegroundColor = ConsoleColor(Randomix(0, 5));
		Console::SetCursorPosition(x, y + 0); cout << "/\\";
		Console::ForegroundColor = ConsoleColor(Randomix(0, 5));
		Console::SetCursorPosition(x, y + 1); cout << "\\/";
	}


};

