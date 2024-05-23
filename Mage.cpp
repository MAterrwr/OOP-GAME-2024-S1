#include "Mage.h"

using namespace std;

Mage::Mage() {
    health = 100; //set defualt health damage defense inventory and skill
    damage = 20;
    defense = 11;
    skill_meter = 0;
}

Mage::Mage(int health, int damage, int defense) {
    this->health = health; //set health damage defense inventory and skill
    this->damage = damage;
    this->defense = defense;
    skill_meter = 0;
}

/* void Mage::cast_skill(); { 
    int damage = 0;
    cout << "Mage has cast a skill" << damage << endl; //returns double the damage
} */

void Mage::print() {
    cout << "Mage creation complete" << endl;
}
