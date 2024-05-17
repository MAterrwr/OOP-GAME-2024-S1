#ifndef GAME_H
#define GAME_H
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include <iostream>

class Game {
public:
    void play(Player& player, Monster& enemy);
};

#endif