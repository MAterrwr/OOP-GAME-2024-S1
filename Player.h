#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"

class Player : public Entity{
    public:
    int* inventory;
    int inventorySize; 
    int skill;
    Player();
    Player(int health, int damage, int defense, int inventorySize, int skill);
    int getInventorySize();
    void setInventorySize(int inventorySize);
    int getSkill();
    void setSkill(int skill);
};
#endif