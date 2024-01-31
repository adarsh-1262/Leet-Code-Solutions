// 739. Daily Temperatures
// Solution:-

// CODE:
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> result(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int prev_index = s.top();
                s.pop();
                result[prev_index] = i - prev_index;
            }
            s.push(i);
        }

        return result;
    }
};
