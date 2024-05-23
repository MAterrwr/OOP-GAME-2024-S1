#include <iostream>
#include <cstdlib> 
#include <limits>
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Game.h"
#include "Inventory.h"
#include "Knight.h"
#include "testing.h"

//main function for the game to run
int main (){
    system("cls"); // clears all values
    system("clear"); // clears the terminal
    UnitTest test;
    test.runTests();

    return 0;
}