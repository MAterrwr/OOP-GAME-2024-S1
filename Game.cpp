#include "Game.h"

using namespace std;

void Game::play(Player& player, Monster& monster) {
    while (player.isAlive() && monster.isAlive()) {
        cout << "Player's health: " << player.getHealth() << endl;
        cout << "Monster's health: " << monster.getHealth() << "\n\n";
        //Player's turn
        int userAction;
        cout << "Enter the action you want to do:\n";
        cout << "1. for attack\n";
        cout << "2. for defend\n";
        cout << "3. for inventory\n";
        cout << "4. for special ability\n" << endl;
        cin >> userAction;

    if (userAction == 1 || userAction == 2 || userAction == 3 || userAction == 4) {
        switch (userAction)
        {
        case 1:
            cout << "You chose to attack.\n";
            monster.takeDamage(player.getDamage());
            cout << "Player dealt " << player.getDamage() << " damage to the monster\n" << endl;
            cout << "Monster's remaining health: " << monster.getHealth() << endl;
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
            cout << "You chose to attack.\n";
            monster.takeDamage(player.getDamage());
            cout << "Player dealt " << player.getDamage() << " damage to the monster" << endl;
            cout << "Monster's remaining health: " << monster.getHealth() << endl;
            break;

        }
    } else {
        cout << "Invalid action. Please choose again.\n";
    }

        if (!monster.isAlive()) {
            break;
        }

        int damage = monster.getDamage();
        player.takeDamage(damage);
        cout << "Player received " << monster.getDamage() << " damage from the monster\n" << endl;
        cout << "Player's remaining health: " << player.getHealth() << endl;
    }
    if (player.isAlive()) {
        cout << "\nPlayer wins!" << endl;
    } else {
        cout << "\nEnemy wins!" << endl;
    }
}

