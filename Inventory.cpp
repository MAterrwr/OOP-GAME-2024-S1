#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory() : max_items(10), item_count(0), trophy("") {
    item_names = new string[max_items];
    item_quantities = new int[max_items];

    string health_potion = "Health Potion";
    string skill_potion = "Skill Potion";
    add_item(health_potion, 1);
    add_item(skill_potion, 1); 
}

Inventory::~Inventory() {
    delete[] item_names;
    delete[] item_quantities;
}

void Inventory::add_item(string& item_name, int quantity) {
    for (int i = 0; i < item_count; ++i) {
        if (item_names[i] == item_name) {
            item_quantities[i] += quantity;
            return;
        }
    }
    if (item_count < max_items) {
        item_names[item_count] = item_name;
        item_quantities[item_count] = quantity;
        item_count++;
    } else {
        cout << "Inventory is full!" << endl;
    }
}

void Inventory::use_item(string& item_name) {
    for (int i = 0; i < item_count; ++i) {
        if (item_names[i] == item_name) {
            if (item_quantities[i] > 0) {
                item_quantities[i]--;
                cout << "Used one " << item_name << ". Remaining: " << item_quantities[i] << endl;
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
