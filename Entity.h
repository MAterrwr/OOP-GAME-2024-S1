#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

class Entity{
protected:
    int health;
    int damage;
    int defense;
public:
    Entity();
    Entity(int health, int damage, int defense);
    virtual bool isAlive();
    virtual void takeDamage(int Damage);

    int getHealth();
    int getDamage();
    int getDefense();

    void setHealth(int health);
    void setDamage(int damage);
    void setDefense(int defense);

    void print();
};
#endif 