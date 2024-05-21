#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream> 
#include "Entity.h"
#include "Player.h"

class Knight : public Player {
public:
    Knight();
    Knight(int health, int damage, int defense, int skill);
    int specialKnightAttack();

    void print();
};

#endif
