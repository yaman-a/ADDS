#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move {
    public:
    std::string getName() override;
};

#endif // ZOMBIE_H
