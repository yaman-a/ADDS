#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move {
public:
    std::string getName() override;
};

#endif // ROCK_H
