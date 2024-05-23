#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream> 
#include <string>
#include "Entity.h"
#include "Player.h"

using namespace std;

//knight class inheriting from player class
class Knight : public Player {
private:
    string name;
public:
    Knight(); //defualt constructor
    Knight(string name,int health, int damage, int defense); //constructor
    string getName() override; //getter for name

    void print(); //prints output once function member successfully initialised
    int getMaxHealth() override;
    int getMaxSkill() override;
};

#endif