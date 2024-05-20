#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory() : max_items(10), item_count(0), trophy("") {
    item_names = new string[max_items]; //allocate memory for item names
    item_quantities = new int[max_items]; //allocate memory for item quantities

    //initialize with one health potion and one skill potion
    item_names[item_count] = "Health Potion";
    item_quantities[item_count] = 1;
    item_count++;

    item_names[item_count] = "Skill Potion";
    item_quantities[item_count] = 1;
    item_count++;
}

Inventory::~Inventory() {
    delete[] item_names;
    delete[] item_quantities;
}

void Inventory::use_item(string& item_name) {
    //finds the item in the inventory
    for (int i = 0; i < item_count; ++i) {
        if (item_names[i] == item_name) {
            if (item_quantities[i] > 0) {
                //decrease the quantity
                item_quantities[i]--;
                cout << "Used one " << item_name << ". Remaining: " << item_quantities[i] << endl;
                if (item_quantities[i] == 0) {
                    //remove item from inventory if quantity is 0
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
    //if item is not found in the inventory
    cout << "Item " << item_name << " not found!" << endl;
}

void Inventory::print_inventory() {
    cout << "Inventory:" << endl;
    for (int i = 0; i < item_count; ++i) {
        cout << item_names[i] << ": " << item_quantities[i] << endl;
    }
    if (!trophy.empty()) {
        cout << "Trophy: " << trophy << endl;
    }
}

void Inventory::set_trophy(string& trophy_name) {
    trophy = trophy_name;
}

string Inventory::get_trophy() {
    return trophy;
}
