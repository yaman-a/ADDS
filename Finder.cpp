#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {

    // variables
    vector<int> result;
    size_t curr = 0;
    bool foundAll = true;

    // loop over s1 and s2
    for (size_t i = 0; i < s2.size(); i++) {

        // if we find the number in index i and index i + curr, we can just push that
        if (s1[curr + i] == s2[i]) {
            result.push_back(curr);
            continue;
        }


        // find the substring (prefix) from s2 in s1 and take its index
        curr = s1.find(s2.substr(0, i + 1), curr);

        // if prefix wasn't found, we push -1 to result and set our flag to false
        if (curr == string::npos) {
            foundAll = false;
            result.push_back(-1);
        } else {
            result.push_back(curr);
        }
    }


    // If we did not find all the prefixes, the flag would have been set to false, trigerring this loop
    if (!foundAll) {
        size_t remaining = s2.size() - result.size();
        for (size_t i = 0; i < remaining; i++) {
            result.push_back(-1);
        }
    }

    return result;
}