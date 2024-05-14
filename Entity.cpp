#include <iostream>
#include "Entity.h"

Entity::Entity(){
    health = 0;
    attack = 0;
    defense = 0;
}

Entity::Entity(int health, int attack, int defense){
    this->health = health;
    this->attack = attack;
    this->defense = defense;
}

int Entity::getHealth(){
    return health;
}

int Entity::getAttack(){
    return attack;
}

int Entity::getDefense(){
    return defense;
}

void Entity::setHealth(int health){
    this->health = health;
}

void Entity::setAttack(int attack){
    this->attack = attack;
}

void Entity::setDefense(int defense){
    this->defense = defense;
}
