class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                break;
            }
        }
        if(i>=nums.size()-1){
            return nums[0];
        }
        return nums[i+1];
    }
};