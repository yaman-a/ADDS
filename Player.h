#ifndef PLAYER_H
#define PLAYER_H

#include <bits/stdc++.h>

using namespace std;

class Player {
public:
    virtual char makeMove() = 0;
    virtual string getName() = 0;
};



#endif // PLAYER_H
