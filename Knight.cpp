#include "Knight.h"

using namespace std;

Knight::Knight() {
    name = "Knight";
    health = 125; //set default stats
    damage = 30;
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

/*void Knight::cast_skill() {
    return damage * 2; //returns double the damage
}*/

string Knight::getName() {return name;}

void Knight::print() {
    cout << "Knight creation complete\n" << endl;
}

