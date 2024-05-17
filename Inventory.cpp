#include "Inventory.h"

Inventory::Inventory() : max_items(10), item_count(0), trophy("") {
    item_names = string[max_items];
    item_quantities = int[max_items];

    add_item("Health Potion", 1); 
    add_item("Skill Potion", 1); 
}


Inventory::~Inventory() {
    delete [] item_names;
    delete [] item_quantities;
}

void Inventory::use_item(string& item_name) {
    for (int i = 0; i < item_count; ++i) {
        if (item_names[i] == item_name) {
            if (item_quantities[i] > 0) {
                item_quantities[i]--;
                cout << "Used one " << item_name 
                << ". Remaining: " << item_quantities[i] << endl;
                if (item_quantities[i] == 0) {
                    for (int j = i; j < item_count - 1; ++j) {
                        item_names[j] = item_names[j + 1];
                        item_quantities[j] = item_quantities[j + 1];
                    }
                    item_count--;
                }
            } else {
                cout << "No " << item_name << " left!" << endl;
            }
            return;
        }
    }
    cout << "Item " << item_name << " not found!" << endl;
}

void Inventory::print_inventory() {
    cout <<
}