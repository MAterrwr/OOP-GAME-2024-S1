#ifndef ENTITY_H
#define ENTITY_H

class Entity{
protected:
    int health;
    int damage;
    int defense;
public:
    Entity();
    Entity(int health, int damage, int defense);
    virtual bool isAlive() = 0;
    virtual void takeDamage(int Damage) = 0;

    int getHealth();
    int getDamage();
    int getDefense();

    void setHealth(int health);
    void setDamage(int damage);
    void setDefense(int defense);
};
#endif 