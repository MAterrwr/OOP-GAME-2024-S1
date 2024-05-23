#ifndef PLAYER_H
#define PLAYER_H
<<<<<<< Updated upstream

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
public:
    Player(); //default construct
    Player(int health, int damage, int defense); //constructor
    ~Player(); //default destructor

    virtual string getName(); //getter for name of character for polymorphism
    void takeDamage(int Damage); //method to take damage, reducing health based on sefense
    bool isAlive(); // method to check if player is alive

    int getInventorySize(); //getter for inventory size
    void setInventorySize(int inventorySize); //setter for inventory size
    
    int getSkill_meter(); //getter for skill meter
    void setSkill_meter(int skill); //setter for skill meter
    /*virtual void cast_skill() = 0; //pure virtual function of skill */

    Inventory& getInventory(); //getter for inventory
    void print(); //print players details
=======
#include "Entity.h"
#include "Monster.h"

class Player : public Entity {
protected:
    int* inventory;
    int inventorySize; 
    int skill;
public:
    Player();
    Player(int health, int damage, int defense, int inventorySize, int skill);
    void takeDamage(int Damage); 
    bool isAlive();

    int getDamage();

    void attack(Entity* entity);
    void defend();
    void useSpecialAbility(Monster& monster);


    int getInventorySize();
    void setInventorySize(int inventorySize);

    int getSkill();
    void setSkill(int skill); 
>>>>>>> Stashed changes
};
#endif

//skill unfinished