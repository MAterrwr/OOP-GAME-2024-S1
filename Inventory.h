#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include "Player.h"

using namespace std;

class Inventory : public Player {
private:
    int max_items; //create a max items integer
    string* item_names; //dynamically allocate array for item name
    int* item_quantities; //dynamically allocate array for item quantities
    int item_count; //creates integer for current count of items
    string trophy; //trophy awarded to the player

public:
    Inventory(); //default constructor
    ~Inventory(); //default destructor
 
    void use_item(string& item_name); //uses an item from the inventory
    void print_inventory(); //prints the current inventory
    void set_trophy(string& trophy_name); //sets the trophy name
    string get_trophy(); //gets the trophy name
};

#endif 
