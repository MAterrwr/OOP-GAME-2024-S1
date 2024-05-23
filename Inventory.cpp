#include "Inventory.h"

// Constructor
Inventory::Inventory() : items(nullptr), itemCount(0), capacity(10), healthPotionCount(1) {
    items = new std::string[capacity]; // Allocate memory for items array
    // Add default items
    addItem("Health Potion");
    addItem("Skill Potion");
}

// Destructor
Inventory::~Inventory() {
    delete[] items; // Deallocate memory for items array
}

// Add an item to the inventory
void Inventory::addItem(std::string item) {
    if (itemCount < capacity) {
        items[itemCount++] = item; // Add item to the array and increment count
    } else {
        std::cout << "Inventory is full!" << std::endl;
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

// Use a health potion
void Inventory::useHealthPotion(int& playerHealth) {
    if (healthPotionCount > 0) {
        playerHealth += 25; // Increase player's health by 50
        --healthPotionCount; // Decrease health potion count
        std::cout << "Used a health potion. Player's health increased by 50." << std::endl;
    } else {
        std::cout << "No health potion available!" << std::endl;
    }
}

// Print the inventory items
int Inventory::printInventory() {
    std::cout << "Inventory:" << std::endl;
    for (int i = 0; i < itemCount; ++i) {
        std::cout << items[i] << std::endl;
    }
    return healthPotionCount;
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