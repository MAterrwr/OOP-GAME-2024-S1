#include <iostream> 
#include "Entity.h"
#include "Player.h"
#include "Knight.h"

Knight::Knight() {
    health = 125;
    damage = 30;
    defense = 14;
    skill = 0;
}

Knight::Knight(int health, int damage, int defense, int skill) {
    this->health = health;
    this->damage = damage;
    this->defense = defense;
    this->skill = skill;
}

int Knight::specialKnightAttack() {
    return damage * 2 ;
}



