#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Action.h"
#include "Game.h"
#include "Inventory.h"
#include "Knight.h"

int main (){
    Player player(100, 10, 5, 10, 5);
    Monster monster(100, 10, 5, 1);
    Game game;
    game.play(player, monster);
    return 0;
}