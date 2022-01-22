class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans=0,maj=0;
        for(auto x:m){
            if(x.second>ans){
                ans=x.second;
                maj=x.first;
            }
        }
        return maj;
    }
};