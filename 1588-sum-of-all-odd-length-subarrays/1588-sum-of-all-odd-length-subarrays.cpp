class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int inc = 1;
        int n = arr.size();
        int sum = 0;
        while(inc<=n){
            for(int i=0;i<n;i++){
                for(int j=i;j<i+inc && i+inc<=n;j++){
                    sum += arr[j];
                }
            }
            inc+=2;
        }
        return sum;
    }
};