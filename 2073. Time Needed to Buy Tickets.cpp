// 2073. Time Needed to Buy Tickets
// Solution:
// CODE:
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         int n = tickets.size();
        vector<int> ticketsRemaining = tickets; // Copy of tickets array to keep track of remaining tickets for each person
        int time = 0;

        while (ticketsRemaining[k] > 0) { // Continue until person at position k finishes buying tickets
            for (int i = 0; i < n; ++i) {
                if (ticketsRemaining[i] > 0) {
                    // Buy one ticket for person i
                    ticketsRemaining[i]--;
                    time++;

                    // If person i is at position k and has finished buying tickets, return time
                    if (i == k && ticketsRemaining[i] == 0) {
                        return time;
                    }
                }
            }
        }

        return time;
    }
};
