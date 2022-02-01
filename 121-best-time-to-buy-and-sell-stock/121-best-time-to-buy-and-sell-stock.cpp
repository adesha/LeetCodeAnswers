class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=INT_MAX;
        int ma=0;
        for(int i=0;i<prices.size();i++){
            mi=min(mi,prices[i]);
            ma=max(ma,prices[i]-mi);
        }
        return ma;
    }
};