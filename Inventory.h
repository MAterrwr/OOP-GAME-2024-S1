#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include "Player.h"

using namespace std;

class Inventory : public Player {
private:
    int max_items; 
    string* item_names; 
    int* item_quantities; 
    int item_count;
    string trophy;

public:
    Inventory();
    ~Inventory();

    void add_item(string& item_name, int quantity);
    void use_item(string& item_name);
    void print_inventory();
    void set_trophy(string& trophy_name);
    string get_trophy();
};

#endif 
