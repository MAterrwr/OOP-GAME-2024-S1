#ifndef GAME_H
#define GAME_H

#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Mage.h"
#include "Knight.h"
#include "Archer.h"
#include <iostream>
#include <string>

class Game {
public:
    void play(Player& player, Monster& enemy);
};

#endif