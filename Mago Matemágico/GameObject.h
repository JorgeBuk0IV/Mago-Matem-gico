#pragma once
#include "MisLibrerias.h"
#define ANCHO 120
#define ALTO 60

class GameObject
{
protected:
	int x;
	int y;
	int dx;
	int dy;
	int width, height;
	bool itsAlive;
public:
	bool isThereCollision(){}
	
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}
	int GetDX() {
		return dx;
		}
	int GetDY() {
		return dy;
		}
	int GetWidth() {
		return width;
		}
	int GetHeight() {
		return height;
		}
	int Randomix(int min, int max) {
		return (rand() % (min - max) + 1) + max;
	}
	virtual void Delete() {
		for (int _x = 0; _x < width; _x++)
		{
			for (int _y = 0; _y < height; _y++) {
				Console::SetCursorPosition(x + _x, y + _y);
				cout << " ";
			}
		}
	}
	
};