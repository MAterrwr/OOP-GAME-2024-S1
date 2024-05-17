#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Action.h"
#include "Knight.h"
#include "Goblin.h"

Action::Action() : userAction(0) {} // initialize userAction to 0 in the constructor

void Action::askUserAction() {
    std::cout << "Enter the action you want to do:\n";
    std::cout << "1 for attack\n";
    std::cout << "2 for defend\n";
    std::cout << "3 for inventory\n";
    std::cout << "4 for special ability\n";
    std::cin >> userAction;

    Knight knight;
    Goblin goblin;

    if (userAction == 1 || userAction == 2 || userAction == 3 || userAction == 4) {
        knight.getDamage();
        knight.getHealth();
        knight.getDefense();
        knight.getInventorySize();
        goblin.getDamage();
        goblin.getHealth();
        goblin.getDefense();

        switch (userAction)
        {
        case 1:
            std::cout << "You chose to attack.\n";
           
            if (knight.getHealth() > 0) {
                goblin.setHealth(goblin.getHealth() - (knight.getDamage() - goblin.getDefense()));
                knight.setHealth(knight.getHealth() - goblin.getDamage());
            } else {
                std::cout << "You have been defeated.\n";
            }
            break;
        case 2: 
            std::cout << "You chose to defend.\n";
            // Code to perform defend action
            break;
        case 3:
            std::cout << "You chose to check your inventory.\n";
            // Code to perform inventory action
            knight.setInventorySize(1); // set the inventory size to 1
            knight.getInventorySize();
            break;
        case 4:
            std::cout << "You chose to use your special ability.\n";
            // Code to perform special ability action
            break;   
        default:
            break;
        }
    } else {
        std::cout << "Invalid action. Please choose again.\n";
    }
}