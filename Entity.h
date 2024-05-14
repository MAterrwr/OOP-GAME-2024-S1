#ifndef ENTITY_H
#define ENTITY_H

class Entity{
    public:
    int health;
    int damage;
    int defense;
    Entity();
    Entity(int health, int damage, int defense);
    int getHealth();
    int getDamage();
    int getDefense();
    void setHealth(int health);
    void setDamage(int damage);
    void setDefense(int defense);
};
#endif 