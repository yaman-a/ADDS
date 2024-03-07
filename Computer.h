#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Move.h"
#include "Rock.h"

#include <string>

class Computer : public Player {
    public:
    Move* makeMove() override;
    string getName() override;
};

#endif // COMPUTER_H
