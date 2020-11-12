#ifndef _SRC_GAME_H
#define _SRC_GAME_H

#include <SDL2/SDL.h>

class Game
{
public:
    Game();
    ~Game();
    
    bool isRunning(void);
    void update(void);
    void render(void);
    void quit(void);

private:
    bool running = false;

    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event;
};

#endif