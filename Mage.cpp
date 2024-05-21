#include <iostream>
#include "Entity.h"
#include "Player.h"
#include "Mage.h"

using namespace std;

Mage::Mage() {
    health = 100;
    damage = 20;
    defense = 11;
    inventorySize = 10;
    skill = 0;
}

Mage::Mage(int health, int damage, int defense, int inventorySize, int skill) {
    this->health = health;
    this->damage = damage;
    this->defense = defense;
    this->inventorySize = inventorySize;
    this->skill = skill;
}

int Mage::specialAttackMage() {
    return damage * 2;
}

void Mage::print() {
    cout << "Mage creation complete" << endl;
}
