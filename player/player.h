// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;
string getCurrentTime();
class Player
{
    /**
     * Player _has_ id, logdate, PROFILE
     */
protected:
    static int id;
    int ID;
    string dateTime;

public:
    Player()
    {
        ID = id++;
        dateTime = getCurrentTime();
    }

    int getPlayerID() const { return ID; }
    string getLastLogDate() const { return dateTime; }
    void getInfo() const
    {
        cout << left << setw(15) << "ID:" << getPlayerID() << endl
             << left << setw(15) << "Last log date:" << getLastLogDate() << endl
             << endl;
    }
};

// initialize static variables outside of the class
int Player::id = 0;

string getCurrentTime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    string dateTime = dt;
    return dateTime.substr(4, 7) + ", " + dateTime.substr(20, 4) + " " + dateTime.substr(11, 8);
}

#endif
