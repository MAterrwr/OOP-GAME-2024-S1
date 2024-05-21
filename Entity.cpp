#include "Entity.h"

using namespace std;

Entity::Entity() {
    health = 0;
    damage = 0;
    defense = 0;
}

Entity::Entity(int health, int damage, int defense) {
    this->health = health;
    this->damage = damage;
    this->defense = defense;
}

int Entity::getHealth() {
    return health;
}

int Entity::getDamage() {
    return damage;
}

int Entity::getDefense() {
    return defense;
}

void Entity::setHealth(int health) {
    this->health = health;
}

void Entity::setDamage(int damage) {
    this->damage = damage;
}

void Entity::setDefense(int defense) {
    this->defense = defense;
}

bool Entity::Entity() {return 0;}

void Entity::takeDamage(int Damage) {return 0;}

void Entity::print() {
    cout << "Making an entity" << endl;
}