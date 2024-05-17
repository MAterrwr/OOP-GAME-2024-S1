#include <iostream> 
#include "Entity.h"
#include "Monster.h"

Monster::Monster() {
    health = 0;
    damage = 0;
    defense = 0;
    level = 0;
}

Monster::Monster(int health, int damage, int defense, int level) {
    this->health = health * level;
    this->damage = damage * level;
    this->defense = defense * level;
    this->level = level;
}

void Monster::takeDamage(int Damage) {
    health -= Damage;

    if (health < 0) {
        health = 0;
    }
}

bool Monster::isAlive() {
    if (health > 0) {
        return true;
    } else {
        return false;
    }
} 

int Monster::getLevel() {
    return level;
}

void Monster::setLevel(int level) {
    this->level = level;
}
