class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    
    void gen(int n, int k, int nextEle) {
        if(v.size() == k) {
            ans.push_back(v);
        } else if(nextEle == n+1) {
            return;
        } else {
            gen(n, k, nextEle+1);
            v.push_back(nextEle);
            gen(n, k, nextEle+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        gen(n, k, 1);
        return ans;
    }
};