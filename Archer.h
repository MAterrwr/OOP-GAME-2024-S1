#ifndef ARCHER_H
#define ARCHER_H

#include <iostream> 
#include "Entity.h"
#include "Player.h"

//archer class inheriting from the player class
class Archer : public Player {
public:
    Archer(); //default constructor
    Archer(int health, int damage, int defense, int inventorySize, int skill); //constructor
    int specialAttackArcher(); //unfinished //special ability for archer

    void print(); //print archer details
};

#endif