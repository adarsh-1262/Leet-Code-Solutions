// 2485. Find the Pivot Integer
// Solution-1:
// CODE:
class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n*(n+1)/2;

        int squareRoot = sqrt(totalSum);

        if(squareRoot*squareRoot == totalSum){
            return squareRoot;
        }
        return -1;
    }
};

// The problem this code addresses is to find a "pivot integer," which is an integer such that the sum of all positive integers up to and including it equals the sum of all integers from 1 to `n`.

// The logic behind solving this problem lies in understanding the relationship between the sum of consecutive positive integers and perfect squares.

// 1. **Calculating the sum of consecutive positive integers up to `n`:**
//    The sum of the first `n` positive integers can be calculated using the formula for the sum of an arithmetic series:
//    \[
//    \text{totalSum} = \frac{n \cdot (n + 1)}{2}
//    \]
//    This formula derives from the fact that the sum of an arithmetic series is equal to the average of the first and last terms, multiplied by the number of terms.

// 2. **Finding the square root:**
//    After calculating `totalSum`, the code calculates its square root. This is done because perfect squares have an interesting property: their square roots are integers. So if the `totalSum` is a perfect square, its square root will be an integer.

// 3. **Checking for perfect square:**
//    The code then checks if the square of the calculated square root is equal to `totalSum`. If it is, it means that `totalSum` is a perfect square. In other words, if the sum of all positive integers up to `n` is a perfect square, then `n` itself is the square root of that sum.

// 4. **Returning the result:**
//    If `totalSum` is indeed a perfect square, the code returns the square root. This square root represents the pivot integer. Otherwise, if `totalSum` is not a perfect square, the code returns `-1`, indicating that there is no pivot integer for the given input `n`.

// In summary, the code leverages the relationship between the sum of consecutive positive integers and perfect squares. By calculating the sum of positive integers up to `n` and checking if it is a perfect square, it determines whether `n` is the pivot integer.


// Solution-
class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n*(n+1)/2;

        int leftSum = 0;
        for(int i=1; i<=n; i++){
            leftSum += i;
            int rightSum = totalSum - leftSum + i;
            if(leftSum == rightSum){
                return i;
            }
        }
        return -1;
    }
};
