#include <iostream>
#include <cstdlib> 
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Game.h"
#include "Inventory.h"
#include "Knight.h"

int main (){
    Player player(100, 30, 5, 10, 5);
    player.print();
    Monster monster(70, 10, 5, 1);
    monster.print();
    Game game;
    game.play(player, monster);
    return 0;
}