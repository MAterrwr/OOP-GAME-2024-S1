#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Entity.h"
#include "Inventory.h"

//player class inherting from entity
class Player : public Entity {
protected:
    Inventory* inventory; //pointer to dynamically allocated array for inventory
    int skill; //skill level of the player
public:
    Player(); //default construct
    Player(int health, int damage, int defense, int skill); //constructor
    ~Player();
    void takeDamage(int Damage); //method to take damage, reducing health based on sefense
    bool isAlive(); // method to check if player is alive

    int getInventorySize(); //getter for inventory size
    void setInventorySize(int inventorySize); //setter for inventory size
    
    int getSkill(); //getter for skill
    void setSkill(int skill); //setter for skill

    Inventory& getInventory(); //getter for inventory
    void print(); //print players details
};
#endif

//skill unfinished