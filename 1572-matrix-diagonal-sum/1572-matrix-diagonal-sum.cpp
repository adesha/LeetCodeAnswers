class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    ans+=mat[i][j];
                }
                if((i+j+1) == n){
                    ans+=mat[i][j];
                }
            }
        }
        if(n%2!=0){
            ans-=mat[n/2][n/2];
        }
        return ans;
    }
};