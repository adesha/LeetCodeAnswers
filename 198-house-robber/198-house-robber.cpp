class Solution {
public:
    int maxrob(int index,int n,vector<int>& nums,vector<int>& dp)
{
    if(index>=n)
        return 0;
    
    if(dp[index]!=-1)
        return dp[index];
    
    int include= nums[index] + maxrob(index+2,n,nums,dp);// if including curr element, then we cannot rob next house so move to index+2
    int skip = maxrob(index+1,n,nums,dp);
    
    return dp[index] = max(include,skip);
}

int rob(vector<int>& nums) 
{
    int n=nums.size();
    vector<int> dp(n+1,-1);
    return maxrob(0,n,nums,dp);
    
}
};