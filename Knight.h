#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream> 
#include "Entity.h"
#include "Player.h"

//knight class inheriting from player class
class Knight : public Player {
public:
    Knight(); //defualt constructor
    Knight(int health, int damage, int defense); //constructor
    /*void cast_skill(); */ //method for knight special attack

    void print(); //print knights details
};

#endif
