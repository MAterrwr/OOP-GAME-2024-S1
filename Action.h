#ifndef ACTION_H
#define ACTION_H

#include <string>
#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
#include "Knight.h"
#include "Knight.h"
#include "Mage.h"
#include "Archer.h"


class Action {
private:
    int userAction; // variable to store user action 
public: 
    Action(); // constructor
    void askUserAction(Player& player, Monster& monster); // function to ask user action
};
#endif