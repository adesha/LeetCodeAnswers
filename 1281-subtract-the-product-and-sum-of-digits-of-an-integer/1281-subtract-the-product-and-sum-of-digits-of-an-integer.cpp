class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans=0,sum=0,mul=1;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            mul*=rem;
            n=n/10;
        }
        ans=mul-sum;
        return ans;
    }
};