#ifndef MONSTER_H
#define MONSTER_H
<<<<<<< Updated upstream

#include <iostream> 
=======
>>>>>>> Stashed changes
#include "Entity.h"

class Monster : public Entity {
protected:
<<<<<<< Updated upstream
    int level; //Level of the monster, affects the health, daamage and defence
public:
    Monster(); //Default constructor
    Monster(int health, int damage, int defense, int level); //Constructor
    void takeDamage(int Damage); //Method to reduce the monsters health by taking damage
    bool isAlive(); //Method to check if monster is still alive

    int getLevel(); //Getter for the monsters level
    void setLevel(int level); //Setter for the monsters level

    void print(); //Method to print the monsters details
};

=======
    int level;
public:
    Monster();
    Monster(int health, int damage, int defense, int level);
    void takeDamage(int Damage);
    bool isAlive();

    void attack(Entity* entity);

    int getLevel();
    void setLevel(int level);
};
>>>>>>> Stashed changes
#endif