#include "Game.h"

using namespace std;

void Game::startGame() {
    system("cls"); // clears all values
    system("clear"); // clears the terminal

    // Ask the user for their preferred class
    cout << "Welcome to the world of Epic Quest! Prepare to embark on a thrilling adventure filled with perilous battles, cunning strategies, and heroic deeds." << endl;
    cout << "In this role-playing game (RPG), you will take on the role of a brave hero, striving to defeat formidable monsters and restore peace to the land.\n" << endl;

    // Create player and monster objects based on the chosen class
    Player* player; // Declare the player variable outside of the if-else statement
    string playerClass;
    cout << "First, enter your class [Knight, Mage, Archer}: " << endl;
    bool createClass = false;

    while (!createClass) {
        cin >> playerClass;

        if (playerClass == "Knight") {
            player = new Knight();
            player->setPlayerClass("Knight");
            createClass = true;
        } else if (playerClass == "Mage") {
            player = new Mage();
            player->setPlayerClass("Mage");
            createClass = true;
        } else if (playerClass == "Archer") {
            player = new Archer();
            player->setPlayerClass("Archer");
            createClass = true;
        } else {
            cout << "Invalid class. Please try to type accordingly to the box above." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    string rules;
    cout << "\nBefore we start, would you like to familiarise yourself with rules? [Yes/No]" << endl;
    cin >> rules;

    if (rules == "Yes" || rules == "yes") {
        cout << "\nIn Epic Quest, your journey will take you through treacherous landscapes, from dense forests to dark dungeons and haunted ruins." << endl;
        cout << "You will encounter a variety of monsters, each with unique strengths and weaknesses. Combat will test your strategic thinking and quick reflexes as you decide the best course of action:" << endl;
        cout << "\nAttack: Strike your enemy with your weapon or spells." << endl;
        cout << "Defend: Brace yourself to reduce incoming damage." << endl;
        cout << "Inventory: Use items from your inventory to heal or gain an advantage." << endl;
        cout << "Special Ability: Unleash your hero's unique special ability for a powerful effect." << endl;
        cout << "Quit: Leave the game if you need to take a break.\n" << endl;
    }

    double level; // Declare the level variable outside of the if-else statement
    bool createMonster = false;

    while (!createMonster) {
        int monsterLevel;
        cout << "Enter the monster level (1-4): ";
        cin >> monsterLevel;

        if (monsterLevel < 1 || monsterLevel > 4) {
            cout << "Invalid level. Please try again." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
        } else {
            switch (monsterLevel) {
                case 1:
                    level = 1.25;
                    createMonster = true;
                    break;

                case 2:
                    level = 1.5;
                    createMonster = true;
                    break;

                case 3:
                    level = 1.75;
                    createMonster = true;
                    break;

                case 4:
                    level = 2.00;
                    createMonster = true;
                    break;
            }
        }
    }

    Monster monster(100, 10, 0, level); // Create the monster object with the correct level

    // Start the game loop
    play(*player, monster);

    // Clean up dynamically allocated memory
    delete player;
}

//the play function manages the game loop and player to monster interaction
void Game::play(Player& player, Monster& monster) {
    cout << "\nLet the quest begin!\n";

    while (player.isAlive() && monster.isAlive()) { //continue the game loop as long as both the player and the monster are alive
        string P_name = player.getName(); //Players name
        int P_damage = player.getDamage(); //players damage
        int M_damage = monster.getDamage(); //monsters damage
        
        //display current health status of player and monster
        cout << endl << P_name << "'s health: " << player.getHealth() << endl;
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
            cout << "4. for special ability " << "[" <<player.getSkill_meter() << "%]" << endl;
            cout << "5. to quit the game\n" << endl;
            cout << "\n";
                
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
            cout << "\nYou chose to attack.\n";
            monster.takeDamage(P_damage); //player attacks monster
            cout << P_name <<" dealt " << P_damage << " damage to the monster\n" << endl;
            cout << "Monster's remaining health: " << monster.getHealth() << endl << endl;
            player.setSkill_meter(player.getSkill_meter() + 20); //increase skill meter
            if (player.getSkill_meter() > 100) {
                player.setSkill_meter(100); //ensure max skill meter is 100
            }
            break;

        case 2: 
            cout << "You chose to defend.\n";
            // Code to perform defend action
            if (random_number < 40) {
                cout << "Player failed to block incoming attack" << endl;
                P_block = false;
                player.setSkill_meter(player.getSkill_meter() + 10); //increase skill meter
            } else {
                cout << "Player has successfully block the incoming attack" << endl;
                P_block = true;
                player.setSkill_meter(player.getSkill_meter() + 35); //increase skill meter
            }
            if (player.getSkill_meter() > 100) {
                player.setSkill_meter(100); //ensure max skill meter is 100
            }
            break;

        case 3:
              cout << "You chose to check your inventory.\n\n";
                //code to perform inventory action
                if (player.getInventory().printInventory() > 0) {
                //after displaying inventory, player may choose to use a health potion or skill potion
                cout << "\nUse health potion (h), skill potion (s), or return with anything else. ";
                char usePotion;
                cin >> usePotion;

                    if (usePotion == 'h') {
                        //code to use health potion
                        if (player.getInventory().getHealthPotionCount() > 0) {
                            cout << "Using health potion...\n";
                            player.getInventory().useHealthPotion(player.getHealth(), player.getMaxHealth());
                            player.setHealth(player.getHealth() + 50);
                            cout << "New health: " << player.getHealth() << "\n" << endl; //display new health

                        } else { //display if no health potions available
                            cout << "No health potions available." << endl;
                            continue;
                        }
                    } else if (usePotion == 's') {
                        if (player.getInventory().getSkillPotionCount() > 0) { 
                            cout << "Using skill potion... \n" << endl;
                            player.getInventory().useSkillPotion(player.getSkill_meter(), player.getMaxSkill());
                            player.setSkill_meter(player.getSkill_meter() + 80); //increase skill meter by 80

                        } else { //display if no skill potions available 
                            cout << "No skill potions available." << endl;
                            continue;
                        }
                    } else {
                        cout << "Invalid input. Returning to the game.\n" << endl;
                        continue; //return to loop if invalid input
                    }
                } else {
                    cout << "No potions available, use another option \n" << endl;
                    continue; //return to start of loop
                }

            if (player.getSkill_meter() > 100) {
                player.setSkill_meter(100); //ensure max skill meter is 100
            }
                break;

        case 4: //special ability case
            cout << "You chose to use your special ability." << endl;
            // Code to perform special ability action and display what happens
            if (player.getSkill_meter() == 100 || player.getSkill_meter() > 100) {
                if (player.getPlayerClass() == "Knight") {
                    cout << "Knight uses fire sword skill and attacks for double damage! " << endl;
                    monster.takeDamage(P_damage * 2); //double attack damage and attack monster
                    player.setSkill_meter(0); //reset skill bar to 0
                    cout << "Knight deals " << P_damage * 2 << " damage!" << endl;
                    cout << "Monster's remaining health: " << monster.getHealth() << endl << endl;

                } else if (player.getPlayerClass() == "Mage") {
                    cout << "Mage used skill and summons lightning! \n" << endl;
                    player.setSkill_meter(0); //reset skill bar to 0
                    monster.takeDamage(P_damage + 25); //add 25 damage to the mages attack
                    cout << "Mage deals " << P_damage + 25 << " damage!" << endl;
                    cout << "Monster's remaining health: " << monster.getHealth() << endl << endl;
                    
                } else if (player.getPlayerClass() == "Archer") {
                    cout << "Archer uses skill and shoots a flaming arrow!" << endl;
                    player.setSkill_meter(0); //reset skill bar to 0
                    monster.takeDamage(P_damage + 10); //attack damage increse by 10 for the turn
                    cout << "Archer deals " << P_damage + 10 << " damage!" << endl;
                    cout << "Monster's remaining health: " << monster.getHealth() << endl << endl;
                }
            }
            else {
                cout << "Special ability not charged yet. Keep attacking to charge it." << endl; //output to display ability not charged
                continue;
            }

            if (player.getSkill_meter() > 100) {
                player.setSkill_meter(100); //ensure max skill meter is 100
            }

            break;   

        case 5:
            cout << "Quiting...\n";
            return; //exit the game
            break;

        default:
            cout << "Invalid action. Please choose again.\n";
            continue; // Skip the rest of the loop and prompt the user again
        }

        if (!monster.isAlive()) {
            break; //monsters attack
        }

        int actualDmg = 0;
        if (userAction == 2) {
            if (P_block) {
            player.takeDamage(0);
            cout << P_name << " received 0 damage from the monster" << endl; //player blocked attack
            cout << P_name << "'s remaining health: " << player.getHealth() << endl << endl;

            } else {
            int failBlockDmg = M_damage * 1.25;
            actualDmg = failBlockDmg - player.getDefense();
            player.takeDamage(failBlockDmg);   
            cout << P_name << " received " << actualDmg << " damage from the monster" << endl; //failed to block so takes double damage
            cout << P_name << "'s remaining health: " << player.getHealth() << endl << endl;

            } 
            } else {
                actualDmg = M_damage - player.getDefense();
                player.takeDamage(M_damage);
                cout << P_name << " received " << actualDmg <<  " from the monster" << endl; //player blocked attack
                cout << P_name << "'s remaining health: " << player.getHealth() << endl << endl;
            }
        
        }

    if (player.isAlive()) { //print the outcome of the game
        cout << "\nPlayer wins!" << endl;
    } else {
        cout << "\nEnemy wins!" << endl;
    }
} 