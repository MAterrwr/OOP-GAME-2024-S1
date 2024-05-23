#include "Archer.h"

using namespace std;

Archer::Archer() { //default constructor with stats
    health = 100;
    damage = 40;
    defense = 9;
    inventorySize = 10;
    skill = 0;
}

Archer::Archer(int health, int damage, int defense, int inventorySize, int skill) { //constructor to set stats
    this->health = health;
    this->damage = damage;
    this->defense = defense;
    this->inventorySize = inventorySize;
    this->skill = skill;
}

int Archer::specialAttackArcher() { //special attack for the archer which increases the defense
    return defense = 14;
}

void Archer::print() {
    cout << "Making an entity" << endl;
}