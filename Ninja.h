#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move {
    public:
    std::string getName() override;
};


#endif // NINJA_H