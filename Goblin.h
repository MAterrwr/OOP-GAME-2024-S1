#ifndef GOBLIN_H
#define GOBLIN_H

#include "Monster.h"

//goblin class inherting from monster class
class Goblin : public Monster {
public:
    Goblin(); //default constructor
    Goblin(int health, int damage, int defense, int level); //constructor
};

#endif