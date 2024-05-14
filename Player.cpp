#include <iostream>
#include "Entity.h"
#include "Player.h"

Player::Player(){
    health = 0;
    damage = 0;
    defense = 0;
    skill = 0;
}

Player::Player(int health, int damage, int defense, int skill){
    this->health = health;
    this->damage = damage;
    this->defense = defense;
    this->skill = skill;
}

int Player::getSkill(){
    return skill;
}

void Player::setSkill(int skill){
    this->skill = skill;
}



