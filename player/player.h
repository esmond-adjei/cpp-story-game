// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

#include "account.h"

using namespace std;

string getCurrentTime();
int generateID();

class Player
{
protected:
    int ID;
    string dateTime;
    Account playerAccount;

public:
    Player() : ID(generateID()), dateTime(getCurrentTime()) {}
    Player(string username)
    {
        ID = generateID();
        dateTime = getCurrentTime();
        playerAccount.setUsername(username);
    }

    // set id and date
    int getID() const { return ID; }
    Account getAccount() const { return playerAccount; }
    string getLastLogDate() const { return dateTime; }

    void createAccount()
    {
        playerAccount.createAccount();
    }

    void getInfo()
    {
        playerAccount.getProfile();
        cout << left << setw(15) << "ID:" << getID() << endl
             << left << setw(15) << "Last log date:" << getLastLogDate() << endl
             << endl;
    }

    int authenticate()
    {
        cout << playerAccount.getUsername() << " is validated" << endl;
        return 1;
    }
};

// initialize static variables outside of the class
int generateID()
{
    static int id = 0;
    return id++;
}

string getCurrentTime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    string dateTime = dt;
    return dateTime.substr(4, 6) + ", " + dateTime.substr(20, 4) + " " + dateTime.substr(11, 8);
}

#endif
