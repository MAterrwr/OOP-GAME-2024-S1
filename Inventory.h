#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
using namespace std;

class Inventory {
private:
    string* items; // Dynamic array for items
    int itemCount; // Number of items in the inventory
    int capacity; // Capacity of the inventory
    int healthPotionCount;
    int skillPotionCount;

public:
    Inventory(); // Constructor
    ~Inventory(); // Destructor

    void addItem(string item); // Add an item to the inventory
    void removeItem(string item); // Remove an item from the inventory

    void useSkillPotion(int& playerSkill);
    void useHealthPotion(int& playerhealth); // Use a health potion
    int printInventory(); // Print the inventory items
    
    int getItemCount(); // Get the number of items in the inventory
    int getHealthPotionCount(); //get health potion count
    void decreaseHealthPotionCount(); //decrease the health potion count

    int getSkillPotionCount();
    void decreaseSkillPotionCount();
};

#endif