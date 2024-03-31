#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2)
{

    vector<int> result;
    size_t curr = 0;
    bool found = true;

    for (char c : s2) {
        size_t foundIdx = s1.find(c, curr);

        if (foundIdx == string::npos) {
            found = false;
            result.push_back(-1);
        } else {
            result.push_back(foundIdx);
            curr = foundIdx + 1;
        }
    }

    if (!found) {
            size_t remaining = s2.size() - result.size();

            for (size_t i = 0; i < remaining; i++) {
                result.push_back(-1);
            }
        }

        return result;
}