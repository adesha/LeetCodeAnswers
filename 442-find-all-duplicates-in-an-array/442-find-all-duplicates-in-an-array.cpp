class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>ans;
        for(auto x:m){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};