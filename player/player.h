// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iomanip>
#include <iostream>

using namespace std;

class Player
{
protected:
    static int id;
    static int logDate;

public:
    Player()
    {
        id++;
        logDate += 10;
    }

    // getters
    int getID() const { return id; }
    int getLastLogDate() const { return logDate; }
    void getInfo() const
    {
        cout << left << setw(15) << "ID:" << getID() << endl
             << left << setw(15) << "Last log date:" << getLastLogDate() << endl;
    }
};

// initialize static variables outside of the class
int Player::id = 0;
int Player::logDate = 10;

#endif
