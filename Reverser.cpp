#include "Reverser.h"

Reverser::Reverser() {
}

int Reverser::reverseDigit(int num) {
    if (num < 0) {
        return -1;
    }

    return digitHelper(num, 0);
}

int Reverser::digitHelper(int num, int ans) {
    if (num == 0) {
        return ans;
    }

    int temp = num % 10;
    ans = ans * 10 + temp;

    return digitHelper(num / 10, ans);
}

std::string Reverser::reverseString(std::string s) {
    if (s.empty()) {
        return "ERROR";
    }

    std::string ans = stringHelper(s, "", s.size() - 1);

    return ans;
}

std::string Reverser::stringHelper(std::string s, std::string ans, int idx) {
    if (idx < 0) {
        return ans;
    }

    ans = ans + s[idx];

    return stringHelper(s, ans, idx - 1);
}