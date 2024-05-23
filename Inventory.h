#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
using namespace std;

class Inventory {
private:
    string* items; //dynamic array for items
    int itemCount; //number of items in the inventory
    int capacity; //capacity of the inventory
    int healthPotionCount;
    int skillPotionCount;

public:
    Inventory(); //constructor
    ~Inventory(); //destructor

    void addItem(string item); //add an item to the inventory
    void removeItem(string item); //remove an item from the inventory

    void useSkillPotion(int playerSkill, int maxSkill);
    void useHealthPotion(int playerhealth, int maxHealth); //use a health potion
    int printInventory(); //print the inventory items
    
    int getItemCount(); // Get the number of items in the inventory
    int getHealthPotionCount(); //get health potion count
    void decreaseHealthPotionCount(); //decrease the health potion count

    int getSkillPotionCount(); //get skill potion count
    void decreaseSkillPotionCount(); //decrease skill potion count
};

#endif