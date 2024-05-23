#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Game.h"
#include "Inventory.h"
#include "Knight.h"
#include "Game.h"
#include "Mage.h"
#include "Archer.h"
#include <cassert>

using namespace std;

class UnitTest{
    public:
    void runTests(){
        testPlayer();
        testMonster();
        testKnight();
        testMage();
        testArcher();
    }
    private:
    void testPlayer(){
        Player player(100,10,0);
        assert(player.getHealth() == 100);
        assert(player.getDamage() == 10);
        assert(player.getDefense() == 0);
        cout << "Player tests passed" << endl;
    }

    void testMonster(){
        Monster monster(100, 10, 0, 1);
        assert(monster.getHealth() == 100);
        assert(monster.getDamage() == 10);
        assert(monster.getDefense() == 0);
        assert(monster.getLevel() == 1);
        cout << "Monster tests passed" << endl;
    }

    void testKnight(){
        Knight knight;
        assert(knight.getHealth() == 125);
        assert(knight.getDamage() == 30);
        assert(knight.getDefense() == 14);
        assert(knight.getSkill_meter() == 0);
        cout << "Knight tests passed" << endl;
    }

    void testMage(){
        Mage mage;
        assert(mage.getHealth() == 100);
        assert(mage.getDamage() == 20);
        assert(mage.getDefense() == 11);
        assert(mage.getSkill_meter() == 0);
        cout << "Mage tests passed" << endl;
    }

    void testArcher(){
        Archer archer;
        assert(archer.getHealth() == 100);
        assert(archer.getDamage() == 40);
        assert(archer.getDefense() == 9);
        assert(archer.getSkill_meter() == 0);
        cout << "Archer tests passed" << endl;
    }

};
