#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Action.h"
#include "Knight.h"
#include "Goblin.h"

using namespace std;

Action::Action() : userAction(0) {} // initialize userAction to 0 in the constructor

void Action::askUserAction(Player& player, Monster& monster) {
    cout << "Enter the action you want to do:\n";
    cout << "1 for attack\n";
    cout << "2 for defend\n";
    cout << "3 for inventory\n";
    cout << "4 for special ability\n";
    cin >> userAction;
}