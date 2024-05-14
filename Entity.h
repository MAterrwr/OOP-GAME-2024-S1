#ifndef ENTITY_H
#define ENTITY_H

class Entity{
protected:
    int health;
    int attack;
    int defense;
public:
    Entity();
    Entity(int health, int attack, int defense);
    int getHealth();
    int getAttack();
    int getDefense();
    void setHealth(int health);
    void setAttack(int attack);
    void setDefense(int defense);
};
#endif 