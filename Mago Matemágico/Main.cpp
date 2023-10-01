#include "MisLibrerias.h"
#include "Game.h"


int main() {
    Console::SetWindowSize(ANCHO, ALTO);
    Console::CursorVisible = false;
    Game* game = new Game(5, 2);
    while (game->itsGameOver() == false || game->itsWin() == false)
    {
        game->ShowGems();
        game->ShowPotions();
        if (_kbhit())
        {
            game->MoveWizzard(_getch());
        }
       


        _sleep(200);

    }

    return 0;
}
