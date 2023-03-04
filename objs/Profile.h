#ifndef PROFILE_H
#define PROFILE_H

#include "Player.h"

class Profile : public Player
{
private:
    std::string username;

public:
    Profile() : username("*+*+*+") {}
    Profile(std::string name) : username(name) {}

    std::string getUsername() { return username; }
    void setUsername(std::string name) { username = name; }

    void getInfo()
    {
        std::cout << "ID: " << id << std::endl
                  << "Username: " << getUsername() << std::endl
                  << "lastLogDate: " << logDate << std::endl;
    }
};

#endif