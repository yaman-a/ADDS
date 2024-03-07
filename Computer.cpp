#include "Computer.h"

Move* Computer::makeMove() {
    return new Rock();
}

string Computer::getName() {
    return "Computer";
}