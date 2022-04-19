class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int j=0;
            for(j;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    break;
                }
            }
            int flag=0;
            for(j;j<nums2.size();j++){
                if(nums1[i]<nums2[j]){
                    ans.push_back(nums2[j]);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ans.push_back(-1);
            }
        }
        return ans;
    }
};