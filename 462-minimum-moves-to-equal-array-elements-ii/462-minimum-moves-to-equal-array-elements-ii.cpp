class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=nums[(n-1)/2];
        for(int i=0;i<n;i++){
            count+=abs(nums[i]-mid);
        }
        return count;
    }
};