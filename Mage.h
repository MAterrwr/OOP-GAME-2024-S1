#ifndef MAGE_H
#define MAGE_H

#include <iostream>
#include <string>
#include "Entity.h"
#include "Player.h"

using namespace std;

//mage class inherits from player
class Mage : public Player {
private:
    string name; //name of character
public:
    Mage(); //default constructor
    Mage(string name, int health, int damage, int defense); //constructor
    string getName() override; //getter for name

    void print(); //prints output once function member successfully initialised
    int getMaxHealth() override;
    int getMaxSkill() override;
};

#endif