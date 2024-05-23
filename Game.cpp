#include "Game.h"


using namespace std;

void Game::startGame() {
    system("cls"); // clears all values
    system("clear"); // clears the terminal
    // Ask the user for their preferred class
    string playerClass;
    cout << "Enter your class (Knight, Mage, Archer): ";
    cin >> playerClass;


    // Create player and monster objects based on the chosen class
    Player* player; // Declare the player variable outside of the if-else statement

    if (playerClass == "Knight") {
        player = new Knight();
    } else if (playerClass == "Mage") {
        player = new Mage();
    } else if (playerClass == "Archer") {
        player = new Archer();
    } else {
        cout << "Invalid class. Defaulting to Knight." << endl;
        player = new Knight();
    }
    string monsterLevel;
    cout << "Enter the monster level (1-5): ";
    cin >> monsterLevel;

    int level; // Declare the level variable outside of the if-else statement

    if (monsterLevel == "1") {
        level = 1;
    } else if (monsterLevel == "2") {
        level = 1.25;
    } else if (monsterLevel == "3") {
        level = 1.5;
    } else if (monsterLevel == "4") {
        level = 1.75;
    } else if (monsterLevel == "5") {
        level = 2;
    } else {
        cout << "Invalid level. Defaulting to level 1." << endl;
        level = 1; // Assign a default value to level
    }

    Monster monster(100, 10, 0, level); // Create the monster object with the correct level


    // Start the game loop
    play(*player, monster);

    // Clean up dynamically allocated memory
    delete player;
}

//the play function manages the game loop and player to monster interaction
void Game::play(Player& player, Monster& monster) {
    while (player.isAlive() && monster.isAlive()) { //continue the game loop as long as both the player and the monster are alive
        int P_damage = player.getDamage(); //players damage
        int M_damage = monster.getDamage(); //monsters damage
        
        //display current health status of player and monster
        cout << "Player's health: " << player.getHealth() << endl;
        cout << "Monster's health: " << monster.getHealth() << "\n\n";

        //Player's turn
        int userAction;
        bool validInput = false;
        
        //loop until valid input is received.
        while (!validInput) {
            cout << "Enter the action you want to do:\n";
            cout << "1. for attack\n";
            cout << "2. for defend\n";
            cout << "3. for inventory\n";
            cout << "4. for special ability\n";
            cout << "5. to quit the game\n" << endl;
            cin >> userAction;

            //validate input
            if (userAction < 1 || userAction > 5) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please try again" << endl;
            } else {
                validInput = true;
            } 
        }   

        int min = 1;
        int max = 100;
        int random_number = min + rand() % (max - min + 1); //random number for defend action
        bool P_block = false;

        //action based on user input
        switch (userAction)
        {
        case 1:
            cout << "You chose to attack.\n";
            monster.takeDamage(P_damage); //player attacks monster
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
                if (player.getInventory().printInventory() > 0) {
                // After displaying inventory, player may choose to use a health potion
                    cout << "Use health potion? (y/n): ";
                    char usePotion;
                    cin >> usePotion;
                    if (usePotion == 'y') {
                        // Code to use health potion
                        cout << "Using health potion...\n";
                        int currentHealth = player.getHealth();
                        int newHealth = currentHealth + 25;
                        player.setHealth(newHealth); //create a new health after the health potion is used
                        player.getInventory().decreaseHealthPotionCount();
                        cout << "Player used a health potion. Health increased by 25." << endl;
                        cout << "New health: " << player.getHealth() << "\n" << endl; //display new health
                    } else {
                        cout << "please enter y or n. \n" << endl;
                        continue;
                    }
                } else {
                    cout << "No health potions available, use another option \n" << endl;
                    continue; //return to start of loop
                }

                break;
        case 4:
            cout << "You chose to use your special ability.\n";
            // Code to perform special ability action
            break;   

        case 5:
            cout << "quiting\n";
            return; //exit the game
            break;

        default:
            cout << "Invalid action. Please choose again.\n";
            continue; // Skip the rest of the loop and prompt the user again
        }

        if (!monster.isAlive()) {
            break; //monsters attack
        }

        if (P_block) {
            player.takeDamage(M_damage);
            cout << "Player received " << M_damage << " damage from the monster\n" << endl; //player blocked attack
            cout << "Player's remaining health: " << player.getHealth() << endl;
        } else {
            player.takeDamage(M_damage * 2);
            cout << "Player received " << M_damage * 2 << " damage from the monster\n" << endl; //failed to block so takes double damage
            cout << "Player's remaining health: " << player.getHealth() << endl;
        }
        
    }

    if (player.isAlive()) { //print the outcome of the game
        cout << "\nPlayer wins!" << endl;
    } else {
        cout << "\nEnemy wins!" << endl;
    }
}

