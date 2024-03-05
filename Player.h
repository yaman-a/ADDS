#ifndef PLAYER_H
#define PLAYER_H

#include <bits/stdc++.h>
#include "Move.h"

using namespace std;

class Player {
public:
    virtual Move* makeMove() = 0;
    virtual string getName() = 0;
};



#endif // PLAYER_H
