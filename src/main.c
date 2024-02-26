#include "./include/mario_run.h"

int main(int argc, char* argv[])
{
    Game game;
    
    game_init(&game);

    game_run(game);

    return 0;
}