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
    string name;
public:
    Mage(); //default constructor
    Mage(string name, int health, int damage, int defense); //constructor
    /*void cast_skill(); //method for mages special attack */
    string getName();

    void print(); //method to print mages details
};

#endif