#include <iostream>
#include <cstdlib> 
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Game.h"
#include "Inventory.h"
#include "Knight.h"

//main function for the game to run
int main (){
    Player player(100, 30, 5, 5); //setting the stats for player and monster
    player.print();
    Monster monster(70, 10, 5, 1);
    monster.print();
    Game game; //run game
    game.play(player, monster);
    return 0;
}