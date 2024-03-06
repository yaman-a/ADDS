#ifndef WINNER_H
#define WINNER_H

#include "Move.h"

class Winner {
    public:
    Winner();
    Move* getWinner(Move* move1, Move* move2);
};

#endif // WINNER_H