#include <memory>
#include "Game.h"

int main(int argc, char* argv[]) {
    Game * game = new Game();
    game->Start(GameDifficulty::Middle);
    return 0;
}