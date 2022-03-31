class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>a;
        a.push_back(0);
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            a.push_back(sum);
        }
        int ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>ans){
                ans=a[i];
            }
        }
        return ans;
    }
};