// 997. Find the Town Judge
// Solution:

// CODE:
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         // Initialize vectors to keep track of incoming and outgoing trusts
        vector<int> trustsIn(n + 1, 0); // Incoming trusts
        vector<int> trustsOut(n + 1, 0); // Outgoing trusts

        // Iterate through the trust array to count trusts
        for (const auto& relation : trust) {
            int personA = relation[0];
            int personB = relation[1];
            trustsOut[personA]++;
            trustsIn[personB]++;
        }

        // Iterate through the counts to find the judge
        for (int i = 1; i <= n; ++i) {
            if (trustsIn[i] == n - 1 && trustsOut[i] == 0) {
                return i; // Found the judge
            }
        }

        // Judge not found
        return -1;
    }
};
