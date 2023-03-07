#include <iostream>
#include <iomanip>

#include "player/profile.h"
#include "player/progress.h"
#include "game/game.h"
#include "game/account.h"

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
    game1.loadStories();

    // CREATE NEW ACCOUNT
    Account account;
    account.createAccount();

    // load progress
    cout << "\n======== PROGRESS =========" << endl;
    Progress progress1;
    progress1.createProgress(Player2);

    // MORE TO COME
    /*
        load game instructions
        give options to:
            - play a game
                - load available games
                - load level one of selected game [if want to save, allow to create an account]
            - create an account
                - input username
                - print out userinfo
                - load available games
                - load level one of selected game [allow to save at each level]
            - login
                - play new game
                - load saved games [list of user's saved games; allow user to continue level]
    */

    return 0;
}
