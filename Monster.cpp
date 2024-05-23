<<<<<<< Updated upstream
#include "Monster.h"

using namespace std;

//
Monster::Monster() {
    health = 0; //initialise stats to 0
=======
#include <iostream> 
#include "Entity.h"
#include "Monster.h"

Monster::Monster() {
    health = 0;
>>>>>>> Stashed changes
    damage = 0;
    defense = 0;
    level = 0;
}

Monster::Monster(int health, int damage, int defense, int level) {
<<<<<<< Updated upstream
    this->health = health * level; //set the health damage and defense based on level
=======
    this->health = health * level;
>>>>>>> Stashed changes
    this->damage = damage * level;
    this->defense = defense * level;
    this->level = level;
}

void Monster::takeDamage(int Damage) {
<<<<<<< Updated upstream
    health -= Damage; //subtract the damage from the health

    if (health < 0) {
        health = 0; //ensure health does not go below 0
=======
    health -= Damage;

    if (health < 0) {
        health = 0;
>>>>>>> Stashed changes
    }
}

bool Monster::isAlive() {
    if (health > 0) {
<<<<<<< Updated upstream
        return true; //monster is alive
    } else {
        return false; //monster is dead
=======
        return true;
    } else {
        return false;
>>>>>>> Stashed changes
    }
} 

int Monster::getLevel() {
    return level;
}

void Monster::setLevel(int level) {
    this->level = level;
}

<<<<<<< Updated upstream
void Monster::print() {
    cout << "Creating monster ..." << endl;
=======
void Monster::attack(Entity* entity) {
    entity->takeDamage(damage);
>>>>>>> Stashed changes
}