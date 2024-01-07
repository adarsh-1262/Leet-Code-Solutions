// Maximum Area of Longest Diagonal Rectangle
// Solution:-

//CODE:
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxDiagonalLength = 0;
    int maxArea = 0;

    for (const auto& rectangle : dimensions) {
        int length = rectangle[0];
        int width = rectangle[1];
        double diagonalLength = sqrt(length * length + width * width);

        if (diagonalLength > maxDiagonalLength || (diagonalLength == maxDiagonalLength && length * width > maxArea)) {
            maxDiagonalLength = diagonalLength;
            maxArea = length * width;
        }
    }

    return maxArea;
    }
};
