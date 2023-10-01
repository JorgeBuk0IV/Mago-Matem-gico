#pragma once
#include "GameObject.h"

class Wizzard : public GameObject
{
private:
	int Hp;
	string Name;
	int Points = 0;
	

public:
	
	Wizzard() {
		width = 5;
		height = 3;
		x = (Console::WindowWidth - width) / 2;
		y = Console::WindowHeight - (height * 2);
		Hp = 100;
		Name = GetName();
		Points = 0;
		itsAlive = true;
	}
	int GetHp() {
		return this->Hp;
	}
	string GetName() {
		return this->Name;
	}
	void SetName(string value) {
		this->Name = value;
	}
	int GetPoints() {
		return Points;
	}
	void SetPoints(int value) {
		this->Points = value;
	}
	void SetHp(int value) {
		this->Hp = value;
	}
	
	void Move(char tecla) {
		dx = dy = 0;
		tecla = toupper(tecla);

		switch (tecla) {
		case 'W': dy = -1; break;
		case 'A': dx = -1; break;
		case 'S': dy = 1; break;
		case 'D': dx = 1; break;
		default:
			break;
		}

		if (x + dx >= 0 && x + width + dx < ANCHO)
			x += dx;
		if (y + dy >= 0 && y + height + dy < ALTO)
			y += dy;
	}

	void Show() {
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(x, y + 0); cout << "/\\";
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(x, y + 1); cout << "00 -|";
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(x, y + 2 ); cout<< "||";
	}
	bool Dead() {
		return (GetHp() <= 0);
	}

	void Damage() {
		GetHp() - 2;
	}
	
};