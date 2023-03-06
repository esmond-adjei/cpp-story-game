#include <iostream>
#include <iomanip>
#include "player/profile.h"
#include "game/game.h"

using namespace std;
int main(void)
{
    cout << "\n===========================" << endl;
    cout << setw(16) << "Hello Gamers" << endl;
    cout << "===========================\n"
         << endl;

    // CREATE PROFILE
    Profile Player1("Winbledon");
    Player1.getInfo();

    // CREATE ANOTHER PROFILE
    Profile Player2("Hiesenberg");
    Player2.getInfo();

    // CREATE ANOTHER PROFILE WITHOUT NAME
    Profile *Player3 = new Profile();
    Player3->getInfo();

    Profile *DelProfile = new Profile("Addams");
    DelProfile->DeleteProfile();

    // LOAD GAMES
    Game game1;
    game1.loadgame();

    return 0;
}
