#pragma once
#include "Wizzard.h"
#include "BasicOperations.h"
#include "GameObject.h"
#include "GemsManager.h"
#include "PotionManager.h"
class Game
{
private:
	BasicOperations* operation;
	Wizzard* wizzard;
	GemsManager* gems;
	PotionManager* potions;
public:
	Game(int GemsSize, int PotionsSize) {
		wizzard = new Wizzard();
		gems = new GemsManager();
		potions = new PotionManager();
		operation = new BasicOperations();
		for (int i = 0; i < GemsSize; i++)
		{
			gems->ShowGems();
		}
		for (int i = 0; i < PotionsSize; i++)
		{
			potions->ShowPotions();
		}
	}
	void MoveWizzard(char tecla) {
		wizzard->Delete();
		wizzard->Move(tecla);
		wizzard->Show();
	}
	bool itsGameOver() {
		if (wizzard->Dead() == 0)
			return true;
		else
			return false;

	}
	void RandomOperation() {
		int problem = rand() % (4 - 1 + 1) + 1;
		bool operationResult = false;

		if (problem == 1) {
			operationResult = operation->Addition();
		}
		else if (problem == 3) {
			operationResult = operation->Multiplication();
		}
		else if (problem == 2) {
			operationResult = operation->Subtraction();
		}
		else if (problem == 4) {
			operationResult = operation->Division();
		}

		if (operationResult) {
			wizzard->SetPoints(wizzard->GetPoints() + 1);
		}
		else {
			wizzard->Damage();
		}

	}
	void GameOver() {
		if (itsGameOver() == true) {
			system("cls");
			cout << "  GGG     A    M   M  EEEEE      OOO   V   V  EEEEE  RRRR " << endl;
			cout << " G       A A   MM MM  E         O   O  V   V  E      R   R" << endl;
			cout << " G  GG  AAAAA  M M M  EEE       O   O   V V   EEE    RRRR " << endl;
			cout << " G   G A     A M   M  E         O   O    V    E      R  R" << endl;
			cout << "  GGG  A     A M   M  EEEEE      OOO     V    EEEEE  R   R" << endl;

			getch(); // Espera a que el usuario presione una tecla
			system("cls"); // Limpia la pantalla

			cout << "GAME OVER" << endl;


		}
	}
	bool itsWin() {
		bool winner = false;
		if (wizzard->GetPoints() == 5) {
			winner = true;
		}
		else
		{
			winner = false;
		}
		return winner;
	}
	void Win() {
		if (itsWin() == true)
		{
			system("cls");
			cout << "  GGG      A     N   N  AAAAA   SSSS   TTTTT   EEEEE" << endl;
			cout << " G        A A    NN  N  A   A   S        T     E    " << endl;
			cout << " G  GG   AAAAA   N N N  AAAAA    SSS     T     EEE  " << endl;
			cout << " G   G  A     A  N  NN  A   A      S     T     E    " << endl;
			cout << "  GGG   A     A  N   N  A   A   SSSS     T     EEEEE" << endl;
			getch();
			system("cls");
			cout << "Igual vas a Jalar GAAAAAAAAAAAA" << endl;
		}
		
	}
	bool isThereCollisionGems(Gems* gem) {
		bool colisionX = false;
		bool colisionY = false;
		for (int gX = gem->GetX(); gX < gem->GetX() + gem->GetWidth(); gX++)
		{

			for (int wX = wizzard->GetX(); wX < wizzard->GetX() + wizzard->GetWidth(); wX++)
			{
				if (gX == wX) {
					colisionX = true;
					break;
				}
			}
			if (colisionX = true)
			{
				break;
			}
		}
		for (int gY = gem->GetY(); gY < gem->GetY() + gem->GetHeight(); gY++)
		{

			for (int wY = wizzard->GetY(); wY < wizzard->GetY() + wizzard->GetHeight(); wY++)
			{
				if (gY == wY) {
					colisionY = true;
					break;
				}
			}
			if (colisionY = true)
			{
				break;
			}
		}
	}
	void ShowGems() {
		gems->ShowGems();
	}
	void ShowPotions() {
		potions->ShowPotions();
	}
		bool isThereCollisionPotions(Potion * potion) {
			bool colisionX = false;
			bool colisionY = false;
			for (int pX = potion->GetX(); pX < potion->GetX() + potion->GetWidth(); pX++)
			{

				for (int wX = wizzard->GetX(); wX < wizzard->GetX() + wizzard->GetWidth(); wX++)
				{
					if (pX == wX) {
						colisionX = true;
						break;
					}
				}
				if (colisionX = true)
				{
					break;
				}
			}
			for (int pY = potion->GetY(); pY < potion->GetY() + potion->GetHeight(); pY++)
			{

				for (int wY = wizzard->GetY(); wY < wizzard->GetY() + wizzard->GetHeight(); wY++)
				{
					if (pY == wY) {
						colisionY = true;
						break;
					}
				}
				if (colisionY = true)
				{
					break;
				}
			}

		}		
		void collisions() {
			for (int i = 0; i < gems->GetCant(); i++)
			{
				Gems* gem = gems->GetGems(i);
				if (isThereCollisionGems(gem))

				{
					RandomOperation();
					gems->DeleteGems(i);
					i--;
				}
			}
		}
		
};
