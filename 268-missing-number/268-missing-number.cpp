class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
        for(int i=0;i<n+1;i++){
            arr[i]=0;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<n+1;i++){
            if(arr[i]==0){
                ans=i;
            }
        }
        return ans;
    }
};