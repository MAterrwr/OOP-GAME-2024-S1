#include <iostream> 
#include "Entity.h"
#include "Player.h"
#include "Knight.h"

Knight::Knight() {
    health = 100;
    damage = 10;
    defense = 5;
}

Knight::Knight(int health, int damage, int defense, int skill) {
    this->health = health;
    this->damage = damage;
    this->defense = defense;
}



