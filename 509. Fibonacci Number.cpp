// 509. Fibonacci Number
// Solution:- Recursive solution:-

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }
};
