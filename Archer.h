#ifndef ARCHER_H
#define ARCHER_H
#include "Player.h"

class Archer : public Player {
public:
    Archer();
    Archer(int health, int damage, int defense, int inventorySize, int skill);
    int specialAttackArcher();
};

#endif