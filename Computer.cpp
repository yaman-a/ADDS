#include "Computer.h"
#include <bits/stdc++.h>

Move* Computer::makeMove() {
    return new Rock();
}

string Computer::getName() {
    return "Computer";
}