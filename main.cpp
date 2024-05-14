#include <iostream>
#include "Entity.h"

int main(){
    Entity e1;
    Entity e2(100, 10, 5);
    std::cout << e1.getHealth() << std::endl;
    std::cout << e1.getAttack() << std::endl;
    std::cout << e1.getDefense() << std::endl;
    std::cout << e2.getHealth() << std::endl;
    std::cout << e2.getAttack() << std::endl;
    std::cout << e2.getDefense() << std::endl;
    return 0;
}