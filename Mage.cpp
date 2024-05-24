#include "Mage.h"

using namespace std;

Mage::Mage() {
    name = "Mage";
    health = 100; //set defualt health damage defense inventory and skill
    damage = 20;
    defense = 5;
    skill_meter = 0;
    print();
}

Mage::Mage(string name, int health, int damage, int defense) {
    this->name = name;
    this->health = health; //set health damage defense inventory and skill
    this->damage = damage;
    this->defense = defense;
    skill_meter = 0;
}

string Mage::getName() {return name;} //getter for name

void Mage::print() { //prints output once function member successfully initialised
    cout << "Mage creation complete\n" << endl; 
}

int Mage::getMaxHealth() {
    return 100; //set max health of mage to 100
}

int Mage::getMaxSkill() {
    return 100; //set max skill of mage to 100
}
