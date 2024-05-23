#include "Player.h"

using namespace std;

Player::Player() : Entity(), inventory(new Inventory()) {}

Player::Player(int health, int damage, int defense) : Entity(health, damage, defense), inventory(new Inventory()), skill_meter(0) {}

Player::~Player() {
    delete inventory; // Free the memory allocated for the inventory
}

void Player::setInventorySize(int size) {
    delete inventory; // delete old inventory
    inventory = new Inventory[size]; // create new inventory with given size
}

int Player::getInventorySize() { //getter for current inventory size
    return inventory->getItemCount();
}

void Player::takeDamage(int Damage) {
    int actualDamage = Damage - defense; //calculate actual damage considering the defense
    
    if (actualDamage < 0) {
        actualDamage = 0; //ensure damage is not negative
    }
    health -= actualDamage;

    if (health < 0) {
        health = 0;
    }

}

bool Player::isAlive(){
    if (health > 0) {
        return true; //determine if the player is alive
    } else {
        return false; 
    }
} 


int Player::getSkill_meter() { //getter for skill meter
    return skill_meter;
}

void Player::setSkill_meter(int skill) { //setter for skill meter
    this->skill_meter = skill;
}

Inventory& Player::getInventory() {
    return *inventory; //get inventory and return
}


Player::Player(const std::string& playerClass) : playerClass(playerClass) {}

string Player::getPlayerClass() const {
    return playerClass;
}

void Player::setPlayerClass(const std::string& playerClass) {
    this->playerClass = playerClass;
}


string Player::getName() {return name;} //getter for name of character

void Player::print() { //print output once constructor successfully initialised
    cout << "Creating player ..." << endl;
}

int Player::getMaxHealth() {return 0;}

int Player::getMaxSkill() {return 0;}