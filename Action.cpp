#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Action.h"
#include "Knight.h"
#include "Goblin.h"

using namespace std;

Action::Action() : userAction(0) {} // initialize userAction to 0 in the constructor

void Action::askUserAction() {
    cout << "Enter the action you want to do:\n";
    cout << "1 for attack\n";
    cout << "2 for defend\n";
    cout << "3 for inventory\n";
    cout << "4 for special ability\n";
    cin >> userAction;

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
            cout << "You chose to attack.\n";
           
            if (knight.getHealth() > 0) {
                goblin.setHealth(goblin.getHealth() - (knight.getDamage() - goblin.getDefense()));
                knight.setHealth(knight.getHealth() - goblin.getDamage());
            } else {
                cout << "You have been defeated.\n";
            }
            break;
        case 2: 
            cout << "You chose to defend.\n";
            // Code to perform defend action
            break;
        case 3:
            cout << "You chose to check your inventory.\n";
            // Code to perform inventory action
            knight.setInventorySize(1); // set the inventory size to 1
            knight.getInventorySize();
            break;
        case 4:
            cout << "You chose to use your special ability.\n";
            // Code to perform special ability action
            break;   
        default:
            break;
        }
    } else {
        cout << "Invalid action. Please choose again.\n";
    }
}