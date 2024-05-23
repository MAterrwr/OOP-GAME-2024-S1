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
//include all classes to test
using namespace std;

class UnitTest{
    public:
    void runTests(){
        testPlayer(); //test player
        testMonster(); //test monster
        testKnight(); //test knight
        testMage(); //test mage
        testArcher(); //test archer
    }
    private:
    void testPlayer(){ //test for player
        Player player(100,10,0); //initialise with specific stats
        assert(player.getHealth() == 100); //check if health damage and defese is correct
        assert(player.getDamage() == 10);
        assert(player.getDefense() == 0);
        cout << "Player tests passed\n" << endl; //if correct display test passed
    }

    void testMonster(){ //test for monster
        Monster monster(100, 10, 0, 1); //initialise with specific stats
        assert(monster.getHealth() == 100); //check if stats are correct
        assert(monster.getDamage() == 10);
        assert(monster.getDefense() == 0);
        assert(monster.getLevel() == 1);
        cout << "Monster tests passed\n" << endl; //print if test passed
    } 

    void testKnight(){ //test for knight
        Knight knight; //initialise with default constructor
        assert(knight.getHealth() == 125); //check if stats are initialised correctly
        assert(knight.getDamage() == 15);
        assert(knight.getDefense() == 14);
        assert(knight.getSkill_meter() == 0);
        cout << "Knight tests passed\n" << endl; //print if test passed
    }

    void testMage(){ //test for mage
        Mage mage; //initialise with default constructor
        assert(mage.getHealth() == 100); //check if stats initialised correctly
        assert(mage.getDamage() == 18);
        assert(mage.getDefense() == 11);
        assert(mage.getSkill_meter() == 0);
        cout << "Mage tests passed\n" << endl; //print if test passed
    }

    void testArcher(){ //test for archer
        Archer archer; //initialise with default constructor
        assert(archer.getHealth() == 100); //check if stats initialised correctly
        assert(archer.getDamage() == 16);
        assert(archer.getDefense() == 9);
        assert(archer.getSkill_meter() == 0);
        cout << "Archer tests passed\n" << endl; //print if test passed
    }

};
