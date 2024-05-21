#include "Action.h"

using namespace std;

Action::Action() : userAction(0) {} // initialize userAction to 0 in the constructor

void Action::askUserAction(Player& player, Monster& monster) {
    cout << "Enter the action you want to do:\n";
    cout << "1 for attack\n";
    cout << "2 for defend\n";
    cout << "3 for inventory\n";
    cout << "4 for special ability\n";
    cin >> userAction;

    if (userAction == 1 || userAction == 2 || userAction == 3 || userAction == 4) {
        switch (userAction)
        {
        case 1:
            cout << "You chose to attack.\n";
            monster.takeDamage(player.getDamage);
            break;
        case 2: 
            cout << "You chose to defend.\n";
            // Code to perform defend action
            break;
        case 3:
            cout << "You chose to check your inventory.\n";
            // Code to perform inventory action
            player.setInventorySize(1); // set the inventory size to 1
            player.getInventorySize();
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