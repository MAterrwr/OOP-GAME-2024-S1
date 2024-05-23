#include "Entity.h"

using namespace std;

Entity::Entity() { //constructor initialises attributes to 0
    health = 0;
    damage = 0;
    defense = 0;
}

Entity::Entity(int health, int damage, int defense) {
    this->health = health;
    this->damage = damage;
    this->defense = defense;
}

int Entity::getHealth() { //getter for health 
    return health;
}

int Entity::getDamage() { //getter for damage
    return damage;
}

int Entity::getDefense() { //getter for defense
    return defense;
}

void Entity::setHealth(int health) { //setter for health
    this->health = health;
}

void Entity::setDamage(int damage) { //setter for damage
    this->damage = damage;
}

void Entity::setDefense(int defense) { //setter for defense
    this->defense = defense;
}

bool Entity::isAlive() {return 0;} //initialised polymorphism

void Entity::takeDamage(int Damage) { //initialised polymorphism
    health -= Damage;
}

void Entity::print() {
    cout << "Making an entity" << endl; //print function to display entity creation
}
