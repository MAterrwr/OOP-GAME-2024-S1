#include "Entity.h"

Entity::Entity() {
    health = 0;
    damage = 0;
}

Entity::Entity(int Health, int Damage) {
    this->health = Health;
    this->damage = Damage;
}

int Entity::get_health() {return health;}

int Entity::get_damage() {return damage;}

void Entity::set_health(int Health) {
    this->health = Health;
}

void Entity::set_damage(int Damage) {
    this->damage = Damage;
}