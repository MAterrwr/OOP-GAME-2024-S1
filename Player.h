#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Entity.h"

//player class inherting from entity
class Player : public Entity {
protected:
    int* inventory; //pointer to dynamically allocated array for inventory
    int inventorySize;  //size of the inventory
    int skill; //skill level of the player
public:
    Player(); //default construct
    Player(int health, int damage, int defense, int inventorySize, int skill); //constructor
    void takeDamage(int Damage); //method to take damage, reducing health based on sefense
    bool isAlive(); // method to check if player is alive

    int getInventorySize(); //getter for inventory size
    void setInventorySize(int inventorySize); //setter for inventory size

    int getSkill(); //getter for skill
    void setSkill(int skill); //setter for skill

    void print(); //print players details
};
#endif

//skill unfinished