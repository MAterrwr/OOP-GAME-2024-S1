#include "Knight.h"

using namespace std;

Knight::Knight() {
    health = 125; //set default stats
    damage = 30;
    defense = 14;
    skill = 0;
}

Knight::Knight(int health, int damage, int defense, int skill) {
    this->health = health; //set stats
    this->damage = damage;
    this->defense = defense;
    this->skill = skill;
}

int Knight::specialKnightAttack() {
    return damage * 2 ; //returns double the damage
}

void Knight::print() {
    cout << "Knight creation complete" << endl;
}

