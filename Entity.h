#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

//base class for all entities in the game
class Entity{
protected:
    int health; //health of the entity
    int damage; //damage that can be dealt
    int defense; //defensive value
public:
    Entity(); //default constructor
    Entity(int health, int damage, int defense); //constructor
    virtual bool isAlive(); // pure virtual function showing polymorphism
    virtual void takeDamage(int Damage);

    int getHealth(); //getters for the attributes of entity
    int getDamage();
    int getDefense();

    void setHealth(int health); //setters for the attributes of entity
    void setDamage(int damage);
    void setDefense(int defense);

    void print(); //function to print entity details
};
#endif 