// 1342. Number of Steps to Reduce a Number to Zero
// Solution:

// CODE_SOL-1:
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;

        while(num > 0){
            if(num % 2 == 0){
                num /= 2;
            }else{
                num--;
            }
            steps++;
        }
        return steps;
    }
};

// CODE_SOL-2:
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;

        while(num > 0){
            // before we used (num % 2 == 0)
            if((num & 1) == 0){
                num >>= 1; //num = num >> 1;
            }else{
                num--;
            }
            steps++;
        }
        return steps;
    }
};
