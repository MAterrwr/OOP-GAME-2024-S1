#include <iostream>
#include "Entity.h"
#include "Monster.h"
#include "Goblin.h"

Goblin::Goblin() {
    health = 92; //set default stats
    damage = 14;
    defense = 0;
    level = 0;
}

Goblin::Goblin(int health, int damage, int defense, int level) {
    this->health = health * level; //set stats with formulas 
    this->damage = damage * level;
    this->defense = defense * level;
    this->level = level;
}
