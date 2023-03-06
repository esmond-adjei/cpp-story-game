#ifndef PROFILE_H
#define PROFILE_H

#include "player.h"

class Profile : public Player
{
private:
    string username;

public:
    Profile() : Player(), username("** ***") {}
    Profile(string name) : username(name) {}

    string getUsername() { return username; }
    void setUsername(string name) { username = name; }

    void DeleteProfile()
    {
        cout << "Deleted " << getUsername() << endl;
        delete this;
    }

    using Player::getInfo;
    void getInfo()
    {
        if (username == "** ***")
        {
            Player::getInfo();
        }
        else
        {
            cout << left << setw(15) << "ID:" << getPlayerID() << endl
                 << left << setw(15) << "Username:" << getUsername() << endl
                 << left << setw(15) << "Last log date:" << getLastLogDate() << endl
                 << endl;
        }
    }
};

#endif