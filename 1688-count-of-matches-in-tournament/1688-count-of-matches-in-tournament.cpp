class Solution {
public:
    int numberOfMatches(int n) {
        int count=0;
        int extra=0;
        while(n>0){
            if(n==1){
                break;
            }
            if(n%2==0){
                count+=n/2;
                extra=0;
                n=n/2;
            }
            else{
                extra=1;
                count+=(n-1)/2;
                n=(n-1)/2 + extra;
            }
        }
        return count;
    }
};