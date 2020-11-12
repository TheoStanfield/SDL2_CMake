#include "Game.hpp"

Game* game = nullptr;

int main(int argc, char** argv)
{
    game = new Game();

    while (game->isRunning())
    {
        game->update();
        game->render();
    }

    game->quit();
    
    return 0;
}
