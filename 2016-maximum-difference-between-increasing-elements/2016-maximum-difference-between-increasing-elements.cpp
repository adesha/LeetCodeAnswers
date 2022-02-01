class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int currmin = INT_MAX;
        int maxdiff = -1;
        
        for(int i=0; i<nums.size(); i++){
            currmin = min(currmin, nums[i]);
            maxdiff = max(maxdiff, nums[i] - currmin);
        }
        
        if(maxdiff == 0){
            return -1;
        }
        else{
            return maxdiff;
        }
    }
};