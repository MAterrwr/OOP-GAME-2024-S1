#include "Knight.h"

using namespace std;

Knight::Knight() {
    name = "Knight";
    health = 125; //set default stats
    damage = 15;
    defense = 14;
    skill_meter = 0;
    print();
}

Knight::Knight(string name, int health, int damage, int defense) {
    this->name = name;
    this->health = health; //set stats
    this->damage = damage;
    this->defense = defense;
    skill_meter = 0;
}

string Knight::getName() {return name;} //getter for name

void Knight::print() { //prints output once function member successfully initialised
    cout << "Knight creation complete\n" << endl;
}

int Knight::getMaxHealth() {
    return 125; //set max health to 125 for knight
}

int Knight::getMaxSkill() {
    return 100; //set max skill to 100
}
