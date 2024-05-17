#include "Game.h"

using namespace std;

void Game::play(Player& player, Monster& monster) {
    while (player.isAlive() && monster.isAlive()) {
        //Player's turn
        if (!monster.isAlive()) {
            break;
        }
        int damage = monster.getDamage();
        player.takeDamage(damage);
    }
    if (player.isAlive()) {
        cout << "Player wins!" << endl;
    } else {
        cout << "Enemy wins!" << endl;
    }
}
    