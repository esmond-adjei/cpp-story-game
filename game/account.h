#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "../player/player.h"

using namespace std;
class Account
{
    /*
        - authenticate user if loggin in
        - track logged in users id and games playing
        - log out user id
    */
public:
    void createAccount()
    {
        string username, password;
        cout << "\n==== Creat Account ==== \n";
        cout << "User Name: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        // create account
        cout << "\n==== Successfully created account ==== \n";
        Profile p(username);
        p.getInfo();
    }

    void login()
    {
        string username, password;
        cout << "User Name: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        cout << "\n==== Successfully logged in ==== \n";
    }
};

#endif