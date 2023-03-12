#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <iomanip>

using namespace std;
class Account
{
    /*
        - authenticate user if loggin in
        - track logged in users id and games playing
        - log out user id
    */
private:
    string username;
    string password;
    int age = 0;

public:
    Account() {}
    void setUsername(string u) { username = u; }
    void setAge(int a) { age = a; }
    string getUsername() const { return username; }
    int getAge() { return age; }
    void getProfile()
    {
        cout << left << setw(15) << "Username: " << getUsername() << endl;
        cout << left << setw(15) << "Age: " << getAge() << endl;
    }

    void createAccount()
    {
        cout << "\n==== Create Account ==== \n";
        cout << "User Name: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        // create account
        cout << "\n==== Successfully created account ==== \n";
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

    int validatePass()
    {
        return 1;
    }
};

#endif