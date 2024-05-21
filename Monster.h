#ifndef MONSTER_H
#define MONSTER_H

#include <iostream> 
#include "Entity.h"

class Monster : public Entity {
protected:
    int level;
public:
    Monster();
    Monster(int health, int damage, int defense, int level);
    void takeDamage(int Damage);
    bool isAlive();

    int getLevel();
    void setLevel(int level);

    void print();
};

#endif