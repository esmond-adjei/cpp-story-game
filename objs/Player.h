// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player
{
protected:
    int id;
    int logDate;

public:
    Player() : id(0), logDate(0) {}

    // setters
    void setID() { id = 1; }

    // getters
    void getInfo()
    {
        std::cout << "ID: " << id << std::endl
                  << "Username: "
                  << "***" << std::endl
                  << "lastLogDate: " << logDate << std::endl;
    }
};

#endif
