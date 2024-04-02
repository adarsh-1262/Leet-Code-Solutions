// 205. Isomorphic Strings
// Solution:
// CODE:
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> charMap; // Map from s to t
        unordered_map<char, bool> charUsed; // Check if a character in t is already used

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If c1 is already mapped and the mapping is incorrect
            if (charMap.find(c1) != charMap.end() && charMap[c1] != c2)
                return false;

            // If c1 is not yet mapped, but c2 is already used by another character
            if (charMap.find(c1) == charMap.end() && charUsed[c2])
                return false;

            // If c1 is not yet mapped, create a mapping from c1 to c2 and mark c2 as used
            if (charMap.find(c1) == charMap.end()) {
                charMap[c1] = c2;
                charUsed[c2] = true;
            }
        }

        return true;
    }
};
