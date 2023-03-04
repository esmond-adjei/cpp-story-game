#include <iostream>
#include "objs/Profile.h"

using namespace std;
int main(void)
{
    cout << "\n==========================="
         << endl;
    cout << "\tHello Gamers" << endl;
    cout << "===========================\n"
         << endl;

    // CREATE PROFILE
    Profile Esmond("Esmond Adjei");
    Esmond.setID();
    Esmond.getInfo();
    Esmond.setUsername("Kofi");

    return 1;
}
