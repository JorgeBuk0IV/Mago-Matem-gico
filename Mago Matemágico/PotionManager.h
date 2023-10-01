#pragma once
#include "Potion.h"
class PotionManager
{
private:
	Potion** arr;
	int size;
public:
	void AddPotions() {
		Potion** aux = new Potion * [size];
		for (int i = 0; i < size; i++)
		{
			aux[i] = arr[i];
		}
		aux[(size + 1) - 1] = new Potion();
		size++;
		arr = aux;


	}
	void DeletePotion(int pos) {
		Potion** aux = new Potion * [size];

		for (int i = 0; i < pos; i++)
		{
			aux[i] = arr[i];
		}
		for (int j = pos; j < size; j++)
		{
			aux[j] = arr[j + 1];
		}
		delete arr[pos];
		if (arr != nullptr)
		{
			delete[] arr;

		}
		arr = aux;
		size--;
	}
	void ShowPotions() {
		for (int i = 0; i < size; i++) {
			arr[i]->Show();  // Llama a la función Show de cada poción.
		}
	}
};

