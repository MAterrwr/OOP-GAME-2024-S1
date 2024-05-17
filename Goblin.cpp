#include <iostream>
#include "Entity.h"
#include "Monster.h"
#include "Goblin.h"

Goblin::Goblin() {
    health = 92;
    damage = 14;
    defense = 0;
    level = 0;
}

Goblin::Goblin(int health, int damage, int defense, int level) {
    this->health = health * level;
    this->damage = damage * level;
    this->defense = defense * level;
    this->level = level;
}
