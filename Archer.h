#ifndef ARCHER_H
#define ARCHER_H

#include <iostream> 
#include <string>
#include "Entity.h"
#include "Player.h"

using namespace std;

//archer class inheriting from the player class
class Archer : public Player {
private:
    string name;
public:
    Archer(); //default constructor
    Archer(string name, int health, int damage, int defense); //constructor
    /*void cast_skill();*/ //unfinished //special ability for archer
    string getName(); //getter for name

    void print(); //prints output once function member successfully initialised
};

#endif