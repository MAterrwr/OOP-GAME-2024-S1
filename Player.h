#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Entity.h"
#include "Inventory.h"

using namespace std;

//player class inherting from entity
class Player : public Entity {
protected:
    Inventory* inventory; //pointer to dynamically allocated array for inventory
    int skill_meter; //skill meter of the player
    string name; //name of character
    string playerClass;
public:
    Player(); //default construct
    Player(int health, int damage, int defense); //constructor
    virtual int getMaxHealth() = 0;
    virtual int getMaxSkill() = 0;
    virtual ~Player(); //default destructor

    virtual string getName(); //getter for name of character for polymorphism
    void takeDamage(int Damage); //method to take damage, reducing health based on sefense
    bool isAlive(); // method to check if player is alive

    Player(const string& playerClass); // constructor
    string getPlayerClass() const; // function to get player class
    void setPlayerClass(const std::string& playerClass); // function to set player class

    int getInventorySize(); //getter for inventory size
    void setInventorySize(int inventorySize); //setter for inventory size
    
    int getSkill_meter(); //getter for skill meter
    void setSkill_meter(int skill); //setter for skill meter
    /*virtual void cast_skill() = 0; //pure virtual function of skill */

    Inventory& getInventory(); //getter for inventory
    void print(); //print players details
};
#endif

//skill unfinished