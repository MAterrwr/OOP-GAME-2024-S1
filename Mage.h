#ifndef MAGE_H
#define MAGE_H

#include "Player.h"

class Mage : public Player {
public:
    Mage();
    Mage(int health, int damage, int defense, int inventorySize, int skill);
    int specialAttackMage();
};
#endif