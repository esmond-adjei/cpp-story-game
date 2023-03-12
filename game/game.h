#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstddef>
#include "../player/player.h"
#include "../story/story.h"

using namespace std;
class Game
{
private:
    static const int playerCap = 10;
    string playerList[playerCap];
    int playerListLen = sizeof(playerList) / sizeof(string);
    Story story;

    /**
     * MAKE STORY ENGINE LIKE A TERMINAL
     * - load game
     * - sign in
     * - create account
     * - etc.
     */

    /*
        to add
        - save user profile on local machine [id, username, score, level for each game, games played, ]
        - save and load story from local machine
        - when user logs in, check if:
            - new user? [create account, login]
                - load available games
                - track progress for each level and save offline.
            - current user (if able to log in)? [continue game, start new game]
                - continue game? [load saved games -> select one of those saved games]
                - track progress for each level and save offline.
    */

public:
    int getPlayerCap() const { return playerCap; }
    int getPlayerLen() const { return playerListLen; }

    int loadHome()
    {
        int option;
        cout << "1. Play Game" << endl
             << "2. Load Game" << endl
             << "3. Create Account" << endl;
        cin >> option;

        return option;
    }

    void loadGame(Player *player = nullptr)
    {
        int option;
        if (player == nullptr)
        {
            cout << "\n==== Available Games ====" << endl;
            for (int i = 0; i < story.getStoryLen(); i++)
            {
                cout << (i + 1) << ": " << story.getStoryHead(i) << endl;
            }
            cin >> option;
            story.loadStory(story.getStoryHead(option - 1));
        }
        else
        {
            story.loadSavedGames(player); // load game from offline file
        }
    }
};

#endif