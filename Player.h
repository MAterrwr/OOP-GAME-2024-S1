#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"

class Player : public Entity {
protected:
    int* inventory;
    int inventorySize; 
    int skill;
public:
    Player();
    Player(int health, int damage, int defense, int inventorySize, int skill);
    void takeDamage(int Damage); 
    bool isAlive();

    int getInventorySize();
    void setInventorySize(int inventorySize);

    int getSkill();
    void setSkill(int skill); 

    void print();
};
#endif

//skill unfinished