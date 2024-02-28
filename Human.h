#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <bits/stdc++.h>

class Human : public Player {
    private:
    string name;
    public:
    Human();
    Human(const string& name);
    char makeMove() override;
    string getName() override;
};


#endif // HUMAN_H