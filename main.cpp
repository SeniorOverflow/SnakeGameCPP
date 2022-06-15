#include <iostream>
#include <memory>
#include "Game.h"


int main() {
    std::unique_ptr<Game> game;
    game->Start();
    return 0;
}
