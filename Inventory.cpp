#include "Inventory.h"

// Constructor
Inventory::Inventory() : items(nullptr), itemCount(0), capacity(10), healthPotionCount(1), skillPotionCount(1) {
    items = new string[capacity]; // Allocate memory for items array
    // Add default items
    addItem("Health Potion");
    addItem("Skill Potion");
}

// Destructor
Inventory::~Inventory() {
    delete[] items; // Deallocate memory for items array
}

// Add an item to the inventory
void Inventory::addItem(string item) {
    if (itemCount < capacity) {
        items[itemCount++] = item; // Add item to the array and increment count
    } else {
        cout << "Inventory is full!" << endl;
    }
}

// Remove an item from the inventory
void Inventory::removeItem(std::string item) {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i] == item) {
            // Shift items to fill the gap
            for (int j = i; j < itemCount - 1; ++j) {
                items[j] = items[j + 1];
            }
            --itemCount; // Decrement count
            return;
        }
    }
    std::cout << "Item not found!" << std::endl;
}

void Inventory::useSkillPotion(int playerSkill, int maxSkill) {
    //add skill code
    if(skillPotionCount > 0) {
        playerSkill += 0;//determine what to do with skill
        if (playerSkill > maxSkill) {
            playerSkill = maxSkill;
        }
        --skillPotionCount; //decrease skill potion amount
        cout << "Used a skill potion, Special ablity fully charged!" <<endl;
    } else {
        cout << "No skill potion available" << endl;
    }
} 

// Use a health potion
void Inventory::useHealthPotion(int playerHealth, int maxHealth) {
    if (healthPotionCount > 0) {
        playerHealth += 25; // Increase player's health by 25
        if (playerHealth > maxHealth) {
            playerHealth = maxHealth;
        }
        --healthPotionCount; // Decrease health potion count
        cout << "Used a health potion. Player's health increased by 25." << endl;
    } else {
        cout << "No health potion available!" << endl;
    }
}

// Print the inventory items
int Inventory::printInventory() {
    cout << "Inventory:" << endl;
    for (int i = 0; i < itemCount; ++i) {
        cout << items[i] << endl;
    }
    return healthPotionCount + skillPotionCount;
}

// Get the number of items in the inventory
int Inventory::getItemCount() {
    return itemCount;
}

int Inventory::getHealthPotionCount() {
    return healthPotionCount; //returning the amount of health potions
}

void Inventory::decreaseHealthPotionCount() {
    if (healthPotionCount > 0) { //decrease the health potion count after one used
        healthPotionCount--;
    }
}

int Inventory::getSkillPotionCount() {
    return skillPotionCount; //return quantity of skill potions
}

void Inventory::decreaseSkillPotionCount() {
    if (skillPotionCount > 0) {
        skillPotionCount--; //decrease skill potion quantity by 1 after use
    }
}