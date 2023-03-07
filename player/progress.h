#ifndef PROGRESS_H
#define PROGRESS_H

#include "profile.h"

class Progress
{
private:
    /* get story from story class*/
    string storyNLevel[2][2] = {{"story 1", "level 3"}, {"story 2", "level 10"}};
    int rowNum = sizeof(storyNLevel) / sizeof(storyNLevel[0]);

public:
    void createProgress(Profile player)
    {
        /* save this info offline*/
        player.getInfo();

        cout << left << setw(5) << "No." << setw(10) << "Game" << setw(10) << "Level" << endl;
        cout << "--------------------------\n";
        for (int i = 0; i < rowNum; i++)
        {
            cout << left << setw(5) << i + 1;
            for (int j = 0; j < 2; j++)
            {
                cout << left << setw(10) << storyNLevel[i][j];
            }
            cout << endl;
        }
    }

    void saveGame(string story, string level)
    {
        /*1. get current story. 2. get current level. 3. get user id. 4. get username if has account*/
        int newRow = rowNum + 1;
        storyNLevel[newRow][0] = story;
        storyNLevel[newRow][1] = level;
    }
};

#endif