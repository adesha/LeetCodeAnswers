class Solution {
public:
    vector<int> sumZero(int n) {
        int j=-1,i=0;
        vector<int>ans;
        while(i<n){
            if(n%2==0){
                if(i%2==0){
                ans.push_back(abs(j));
            }
            else{
                ans.push_back(j);
                j--;
            }
            i++;
            }
            else{
                if(i+1 == n){
                ans.push_back(0);
                break;
            }
            if(i%2==0){
                ans.push_back(abs(j));
            }
            else{
                ans.push_back(j);
                j--;
            }
            i++;
            }
        }
        return ans;
    }
};