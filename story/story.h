#ifndef STORY_H
#define STORY_H

#include <iostream>
#include "../player/player.h"

using namespace std;
class Story
{
private:
    static const int storyCap = 3;
    string storyList[storyCap] = {"Jungle King", "Detective Sherlock", "Slum Dog Millionaire"};
    int storyListLen = sizeof(storyList) / sizeof(string);

public:
    int getStoryCap() const { return storyCap; }
    int getStoryLen() const { return storyListLen; }
    string getStoryHead(int num) const { return storyList[num]; }

    void loadStory(string storyHead, int level = 0)
    {
        cout << "Story Loaded: " << storyHead << " Level: " << level << endl;
    }

    void loadSavedGames(Player *player)
    {
        // player object is needed to fetch player's saved games
        int level;
        cout << "Player: " << player->getID() << " saved games loaded ... Select level" << endl;
        cin >> level;
        // FIND SMART WAY TO SELECT LEVEL AND STORY TOGETHER

        loadStory(getStoryHead(level), level);
    }
};

#endif