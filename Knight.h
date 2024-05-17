#ifndef KNIGHT_H
#define KNIGHT_H
#include "Player.h"

class Knight : public Player{    
    public:
    Knight();
    Knight(int health, int damage, int defense, int inventorySize);
    void setInventorySize(int size); 
    int getInventorySize();
};
#endif
