<<<<<<< Updated upstream
#include <iostream>
#include <cstdlib> 
#include <limits>
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Game.h"
#include "Inventory.h"
#include "Knight.h"

//main function for the game to run
int main (){
    Game game;
    game.startGame();

    return 0;
=======
#include "Monster.h"
#include "Action.h"
#include "Player.h"
#include "Entity.h"
#include <iostream>

int main() {
    // Create a player
    Player player(100, 20, 10, 1, 5); // health, damage, defense, inventorySize, skill

    // Create a monster
    Monster monster(80, 15, 5,2); // health, damage, defense, level

    // Create an action object
    Action action;

    // Game loop
    while (true) {
        // Ask the player for an action
        int getUserAction(); // Declare the getUserAction function

        int userAction = getUserAction();
        switch (userAction) {
            case 1: // Attack
                player.attack(&monster);
                break;
            case 2: // Defend
                player.defend();
                break;
            case 3: // Inventory
                std::cout << "Inventory size: " << player.getInventorySize() << "\n";
                break;
            case 4: // Special ability
                player.useSpecialAbility(monster);
                break;
            default:
                std::cout << "Invalid action. Please enter a number between 1 and 4.\n";
                break;
        }

        // Check if the monster is dead
        if (monster.getHealth() <= 0) {
            std::cout << "You defeated the monster!\n";
            break;
        }

        // Monster's turn to attack
        monster.attack(&player); // Pass a pointer to the player object

        // Check if the player is dead
        if (player.getHealth() <= 0) {
            std::cout << "You were defeated by the monster.\n";
            break;
        }
    }

    return 0;
}

// Entity.h
class Entity {
public:
    Entity(int health, int damage, int defense);
    virtual ~Entity(); // virtual destructor
    int getHealth();

private:
    int health;
    int damage;
    int defense;
};

// Entity.cpp
Entity::Entity(int health, int damage, int defense) : health(health), damage(damage), defense(defense) {}
Entity::~Entity() {}
int Entity::getHealth() { return health; }

// main.cpp
int main() {
    // ...
    int userAction = action.getUserAction();
    // ...
>>>>>>> Stashed changes
}