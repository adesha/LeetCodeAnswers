class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        vector<int>a;
        int count=0,i=0;
        while(count<n){
            a.push_back(start+2*i);
            count++;
            i++;
        }
        for(auto x:a){
            ans=ans^x;
        }
        return ans;
    }
};