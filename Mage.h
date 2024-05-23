#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include "Entity.h"
#include "Player.h"

//mage class inherits from player
class Mage : public Player {
public:
    Mage(); //default constructor
    Mage(int health, int damage, int defense, int skill); //constructor
    int specialAttackMage(); //method for mages special attack

    void print(); //method to print mages details
};

#endif