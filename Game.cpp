#include "Game.h"

using namespace std;

void Game::play(Player& player, Monster& monster) {
    while (player.isAlive() && monster.isAlive()) {
        int P_damage = player.getDamage();
        int M_damage = monster.getDamage();

        cout << "Player's health: " << player.getHealth() << endl;
        cout << "Monster's health: " << monster.getHealth() << "\n\n";
        //Player's turn
        int userAction;
        bool validInput = false;

        while (!validInput) {
            cout << "Enter the action you want to do:\n";
            cout << "1. for attack\n";
            cout << "2. for defend\n";
            cout << "3. for inventory\n";
            cout << "4. for special ability\n";
            cout << "5. to quit the game\n" << endl;
            cin >> userAction;

            if (userAction < 1 || userAction > 5) {
                cout << "Invalid input. Please try again" << endl;
            } else {
                validInput = true;
            }
        }

        int min = 1;
        int max = 100;
        int random_number = min + rand() % (max - min + 1);
        bool P_block = false;

        switch (userAction)
        {
        case 1:
            cout << "You chose to attack.\n";
            monster.takeDamage(P_damage);
            cout << "Player dealt " << P_damage << " damage to the monster\n" << endl;
            cout << "Monster's remaining health: " << monster.getHealth() << endl;
            break;

        case 2: 
            cout << "You chose to defend.\n";
            // Code to perform defend action
            cout << random_number << endl;
            if (random_number < 40) {
                cout << "Player failed to block incoming attack" << endl;
                P_block = false;
            } else {
                cout << "Player has successfully block the incoming attack" << endl;
                P_block = true;
            }
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

        case 5:
            cout << "quiting\n";
            return;
            break;

        default:
            cout << "Invalid action. Please choose again.\n";
            continue; // Skip the rest of the loop and prompt the user again
        }

        if (!monster.isAlive()) {
            break;
        }

        if (P_block) {
            player.takeDamage(M_damage);
            cout << "Player received " << M_damage << " damage from the monster\n" << endl;
            cout << "Player's remaining health: " << player.getHealth() << endl;
        } else {
            player.takeDamage(M_damage * 2);
            cout << "Player received " << M_damage * 2 << " damage from the monster\n" << endl;
            cout << "Player's remaining health: " << player.getHealth() << endl;
        }
        


    }
    if (player.isAlive()) {
        cout << "\nPlayer wins!" << endl;
    } else {
        cout << "\nEnemy wins!" << endl;
    }
}

