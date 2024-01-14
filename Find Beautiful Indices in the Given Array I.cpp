// Find Beautiful Indices in the Given Array I
// Solution:-

// CODE:
class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> beautiful_indices;
        
        for (int i = 0; i < s.length(); ++i) {
            // Check if substring a is found starting at index i
            if (i <= s.length() - a.length() && s.substr(i, a.length()) == a) {
                // Iterate over possible indices for substring b within the range |j - i| <= k
                for (int j = std::max(0, i - k); j <= std::min<int>(s.length() - b.length(), i + k); ++j) {
                    // Check if substring b is found at index j
                    if (s.substr(j, b.length()) == b) {
                        beautiful_indices.push_back(i);
                        break; // Move to the next i as we found a beautiful index for the current i
                    }
                }
            }
        }
        return beautiful_indices;

    }
};
