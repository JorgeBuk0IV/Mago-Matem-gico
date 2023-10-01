#pragma once
#include "Gems.h"
class GemsManager
{
private:
	Gems** arr;
	int size;
public:
	GemsManager() {
		size = 0;
	}
	~GemsManager() {
		for (int i = 0; i < size; i++)
		{
			delete arr[i];
		}
		delete[] arr;
	}
	void AddGems() {
		Gems** aux = new Gems* [size];
		for (int i = 0; i < size; i++)
		{
			aux[i] = arr[i];
		}
		aux[(size + 1) - 1] = new Gems();
		size++;
		arr = aux;


	}

	void DeleteGems(int pos) {
		Gems** aux = new Gems * [size];

		for (int i = 0; i < pos; i++)
		{
			aux[i] = arr[i];
		}
		for (int j = pos; j < size; j++)
		{
			aux[j] = arr[j + 1];
		}
		arr[pos]->Delete();
		delete arr[pos];
		if (arr != nullptr)
		{
			delete[] arr;

		}
		arr = aux;
		size--;
	}
	int GetCant() {
		return size;
	}
	void ShowGems() {
		GemsManager* gems;
		for (int i = 0; i < size; i++) {
			arr[i]->Show();  // Llama a la función Show de cada poción.
		}
	}
	Gems* GetGems(int pos) {
		return arr[pos];
	}
};

	