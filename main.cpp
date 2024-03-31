#include <iostream>
#include "Finder.h" // Include the header file containing your function

int main() {
    Finder finder;

    std::string s1 = "4634554567";
    std::string s2 = "45689";

    std::vector<int> result = finder.findSubstrings(s1, s2);

    // Output the results
    std::cout << "Indexes of substrings in s1: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
