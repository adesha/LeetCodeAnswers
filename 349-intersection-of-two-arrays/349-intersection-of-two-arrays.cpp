class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        set<int>s;
        for(int i=0;i<nums2.size();i++){
            if(m[nums2[i]]>0){
                s.insert(nums2[i]);
            }
        }
        vector<int>ans;
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};