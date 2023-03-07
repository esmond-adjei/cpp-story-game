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
    int ID, DATE;

public:
    Player()
    {
        ID = id++;
        logDate += 10;
        DATE = logDate;
    }

    // getters
    int getPlayerID() const { return ID; }
    int getLastLogDate() const { return DATE; }
    void getInfo() const
    {
        cout << left << setw(15) << "ID:" << getPlayerID() << endl
             << left << setw(15) << "Last log date:" << getLastLogDate() << endl
             << endl;
    }
};

// initialize static variables outside of the class
int Player::id = 0;
int Player::logDate = 10;

#endif
