#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate : public Move {
    public:
    Pirate();
    std::string getName() override;
};

#endif // PIRATE_H
