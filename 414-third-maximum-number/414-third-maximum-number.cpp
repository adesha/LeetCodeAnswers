class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int arr[s.size()];
        int i=0;
        for(auto x:s){
            arr[i]=x;
            i++;
        }
        if(s.size()<3){
            return arr[s.size()-1];
        }
        return arr[s.size()-3];
    }
};