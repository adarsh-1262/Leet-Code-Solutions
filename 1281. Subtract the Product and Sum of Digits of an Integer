//1281. Subtract the Product and Sum of Digits of an Integer
// solution

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;

        while(n>0){
            int a=n%10;

            sum=sum+a;
            prod=prod*a;

            n=n/10;
        }
        int ans=prod-sum;
        return ans;
    }
};
