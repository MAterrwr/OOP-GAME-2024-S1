#include "Archer.h"

using namespace std;

Archer::Archer() { //default constructor with stats
    name = "Archer";
    health = 100;
    damage = 40;
    defense = 9;
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

/*void Archer::cast_skill() { //special attack for the archer which increases the defense
    return defense = 14;
}*/

void Archer::print() {
    cout << "Making an entity\n" << endl;
}