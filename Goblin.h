#ifndef GOBLIN_H
#define GOBLIN_H
#include "Monster.h"

class Goblin : public Monster{
    public:
    Goblin();
    Goblin(int health, int damage, int defense, int level);
};
#endif