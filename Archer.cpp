#include <iostream> 
#include "Entity.h"
#include "Player.h"
#include "Archer.h"

Archer::Archer() {
    health = 100;
    damage = 40;
    defense = 9;
    inventorySize = 10;
    skill = 0;
}

Archer::Archer(int health, int damage, int defense, int inventorySize, int skill) {
    this->health = health;
    this->damage = damage;
    this->defense = defense;
    this->inventorySize = inventorySize;
    this->skill = skill;
}

int Archer::specialAttackArcher() {
    return defense = 14;
}

