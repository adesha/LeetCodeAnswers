class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
         int cnt=0;
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            cnt = __builtin_popcount(arr[i]);
            v.push_back(make_pair(cnt,arr[i]));
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto i:v){
            ans.push_back(i.second);
        }
        return ans;
    }
};