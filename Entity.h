#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>

class Entity {
protected:
    int health;
    int damage;
public:
    Entity();
    Entity(int Health, int Damage);

    int get_health();
    int get_damage();

    void set_health(int Health);
    void set_damage(int Damage);
};
#endif