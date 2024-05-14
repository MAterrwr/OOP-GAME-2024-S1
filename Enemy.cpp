#include "Enemy.h"

using namespace std;

Enemy::Enemy(int number) {
    switch(number) {
        case 1: //Easy (Goblin)
            health = 100;
            damage = 20;
            break; 
        case 2: //Medium (Orc)
            health = 125;
            damage = 30;
            break;    
        case 3: //Hard (Demon)
            health = 150;
            damage = 40;
            break;
        default:
            health = 0;
            damage = 0;
            cout << "Enemy type not specified" << endl;
            break;
    }
}