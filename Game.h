#ifndef GAME_H
#define GAME_H
//including the header files needed
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Mage.h"
#include "Knight.h"
#include "Archer.h"
#include "Inventory.h"
#include <iostream>
#include <string>
#include <cstdlib> 

class Game {
public:
    //function to start and run the game
    void play(Player& player, Monster& enemy);
};

#endif