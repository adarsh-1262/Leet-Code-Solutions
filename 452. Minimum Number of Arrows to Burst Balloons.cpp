// 452. Minimum Number of Arrows to Burst Balloons
// Solution:
// CODE:
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // Sort the balloons based on their start points
        sort(points.begin(), points.end());
        
        // If there are no balloons, return 0 arrows needed
        if(points.empty())
            return 0;

        // Initialize the number of arrows needed to burst the balloons
        int arrows = 1;

        // Initialize the end point with the end of the first balloon
        int end = points[0][1];

        // Iterate through the balloons starting from the second one
        for (int i = 1; i < points.size(); ++i) {
            // If the current balloon's start point is greater than the previous balloon's end point,
            // it means a new arrow is needed
            if (points[i][0] > end) {
                // Increment the arrow count
                arrows++;
                // Update the end point to the end of the current balloon
                end = points[i][1];
            }
            else {
                // If the current balloon overlaps with the previous one,
                // update the end point to the minimum of the current and previous balloon's end points
                end = min(end, points[i][1]);
            }
        }
        
        // Return the minimum number of arrows needed
        return arrows;
    }
};
