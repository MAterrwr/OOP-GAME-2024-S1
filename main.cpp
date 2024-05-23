#include <iostream>
#include <cstdlib> 
#include <limits>
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Game.h"
#include "Inventory.h"
#include "Knight.h"

//main function for the game to run
int main (){
    Player player(100, 30, 5); //setting the stats for player and monster
    Monster monster(70, 10, 5, 1);
    Game game; //run game
    game.startGame(); //start the game
    game.play(player, monster);
    return 0;
}