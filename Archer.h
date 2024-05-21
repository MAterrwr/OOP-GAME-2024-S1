#ifndef ARCHER_H
#define ARCHER_H

#include <iostream> 
#include "Entity.h"
#include "Player.h"

class Archer : public Player {
public:
    Archer();
    Archer(int health, int damage, int defense, int inventorySize, int skill);
    int specialAttackArcher(); //unfinished

    void print();
};

#endif