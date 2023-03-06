#ifndef GAME_H
#define GAME_H

#include <iostream>

using namespace std;
class Game
{
private:
    static const int playerCap = 10;
    static const int storyCap = 3;

    string playerList[playerCap];
    string storyList[storyCap] = {"Jungle King", "Detective Sherlock", "Slum Dog Millionaire"};
    int playerListLen = sizeof(playerList) / sizeof(string);
    int storyListLen = sizeof(storyList) / sizeof(string);

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
    int getStoryCap() const { return storyCap; }
    int getPlayerLen() const { return playerListLen; }
    int getStoryLen() const { return storyListLen; }

    void loadgame()
    {
        /* TO ADD
        - Player should be able to choose a game
        - A chosen game should load the current level of the story
        */
        cout << "\n==== Available Games ====" << endl;
        for (int i = 0; i < getStoryLen(); i++)
        {
            cout << (i + 1) << ": " << storyList[i] << endl;
        }
    }
};

#endif