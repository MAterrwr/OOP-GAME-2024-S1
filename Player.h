#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"

class Player : public Entity{
    protected:
    int skill;
    public:
    Player();
    Player(int health, int damage, int defense, int skill);
    int getSkill();
    void setSkill(int skill);
};
#endif