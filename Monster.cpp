#include "Monster.h"

using namespace std;

Monster::Monster() {
    health = 0; //initialise stats to 0
    damage = 0;
    defense = 0;
    level = 0;
}

Monster::Monster(int health, int damage, int defense, int level) {
    this->health = health * level; //set the health damage and defense based on level
    this->damage = damage * level;
    this->defense = defense * level;
    this->level = level;
}

void Monster::takeDamage(int Damage) {
    health -= Damage; //subtract the damage from the health

    if (health < 0) {
        health = 0; //ensure health does not go below 0
    }
}

bool Monster::isAlive() {
    if (health > 0) {
        return true; //monster is alive
    } else {
        return false; //monster is dead
    }
} 

int Monster::getLevel() {
    return level;
}

void Monster::setLevel(int level) {
    this->level = level;
}

void Monster::print() {
    cout << "Creating monster ..." << endl;
}