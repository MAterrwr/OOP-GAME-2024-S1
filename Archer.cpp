#include "Archer.h"

using namespace std;

Archer::Archer() { //default constructor with stats
    name = "Archer";
    health = 100;
    damage = 24;
    defense = 4;
    skill_meter = 0;
    print();
}

Archer::Archer(string name, int health, int damage, int defense) { //constructor to set stats
    this->name = name;
    this->health = health;
    this->damage = damage;
    this->defense = defense;
    skill_meter = 0;
}

string Archer::getName() {return name;} //getter for name

void Archer::print() { //prints output once function member successfully initialised
    cout << "Archer creation complete\n" << endl;
}

int Archer::getMaxHealth() {
    return 100; //set max skill of archer to 100
}

int Archer::getMaxSkill() {
    return 100; //set max skill to 100
}
