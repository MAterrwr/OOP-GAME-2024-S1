#include <iostream>
#include "Entity.h"
#include "Player.h"

Player::Player() : Entity(), inventory(nullptr), inventorySize(0)
{
    inventorySize = 0;
    skill = 0;
}

Player::Player(int health, int damage, int defense, int inventorySize, int skill) : Entity(health, damage, defense)
{
    this->inventorySize = inventorySize;
    this->skill = skill;    
}

void Player::setInventorySize(int size) {
    delete[] inventory; // delete old inventory
    inventory = new int[size]; // create new inventory with given size
    inventorySize = size; // set inventory size
}

int Player::getInventorySize() {
    return inventorySize;
}


int Player::getSkill(){
    return skill;
}

void Player::setSkill(int skill){
    this->skill = skill;
}



