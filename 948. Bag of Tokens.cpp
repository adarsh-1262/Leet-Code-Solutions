// 948. Bag of Tokens
// Solution:

// CODE:
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // finded size of array and sorted the array
        int n = tokens.size();
        sort(tokens.begin(), tokens.end());

        // initialized all required variables for solution
        int ans = 0, score = 0, i = 0, j = n - 1;
        
        // applied loop with condition 
        while (i <= j) {
            // conditonal statement if power>=tokens[i], then power-=tokens[i]:
            if (power >= tokens[i]) {
                power -= tokens[i];
                i++;
                score++;
                // finding ans b/w two variable which is maximum
                ans = max(ans, score);

                //another condition statement if score > 0:
            } else if (score > 0) {
                power += tokens[j];
                j--;
                score--;
            } else {
                // otherwise break:
                break;
            }
        }
        // returning ans 
        return ans;
    }
};
