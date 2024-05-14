#ifndef MONSTER_H
#define MONSTER_H
#include "Entity.h"

class Monster : public Entity{
    protected:
    int level;
    public:
    Monster();
    Monster(int health, int damage, int defense, int level);
    int getLevel();
    void setLevel(int level);
};
#endif