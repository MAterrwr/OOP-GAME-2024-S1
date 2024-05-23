#include "Player.h"

using namespace std;

Player::Player() : Entity(), inventory(nullptr), inventorySize(0)
{ //initialise default values
    inventorySize = 0;
    skill = 0;
}

Player::Player(int health, int damage, int defense, int inventorySize, int skill) : Entity(health, damage, defense)
{ //initialise with provided values
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

void Player::takeDamage(int Damage) {
    int actualDamage = Damage - defense; //calculate actual damage considering the defense
    
    if (actualDamage < 0) {
        actualDamage = 0; //ensure damage is not negative
    }
    health -= actualDamage;  //reduce health

    if (health < 0) {
        health = 0; //ensure health does not go below zero
    }
}

bool Player::isAlive(){
    if (health > 0) {
        return true; //player is alive if health is greater than 0
    } else {
            return false;
        }
}

int Player::getSkill() {
    return skill;
}

void Player::setSkill(int skill) {
    this->skill = skill;
}

void Player::print() {
    cout << "Creating player ..." << endl;
}



