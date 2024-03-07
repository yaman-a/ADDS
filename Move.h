#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <unordered_set>


class Move {
    public:
    std::unordered_set<std::string> beats;
    virtual std::string getName() = 0;
};


#endif // MOVE_H