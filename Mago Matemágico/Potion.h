#pragma once
#include "Wizzard.h"
class Potion
{
private:
	Wizzard* wizzard;
public:
	Potion(Wizzard* wizzard) {
		this->wizzard = wizzard;
	}
	void UsePotion() {
		int currentHp = wizzard->GetHp();
		currentHp += 1;
		wizzard->SetHp(currentHp);
	}
	void Show() {
		Console::SetCursorPosition(x, y + 0); cout << " []";
		Console::SetCursorPosition(x, y + 1); cout << "[__]";
	}
};


