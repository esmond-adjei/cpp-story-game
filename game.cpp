#include <iostream>
#include <iomanip>
#include "player/player.h"
#include "player/account.h"
#include "game/game.h"

using namespace std;
int main(void)
{
    cout << "\n===========================" << endl;
    cout << setw(16) << "Hello Gamers" << endl;
    cout << "===========================\n"
         << endl;

    // CREATE Player
    Player player("Winbledon");

    // START GAME
    Game gameEngine;
    switch (gameEngine.loadHome())
    {
    case 1:
        gameEngine.loadGame();
        break;
    case 2:
        player.authenticate(); // independent function to validate player
        gameEngine.loadGame(&player);
        break;
    case 3:
        player.createAccount();
        gameEngine.loadGame();
        break;
    default:
        cout << "Invalid Choice\n";
    }

    return 0;
}
