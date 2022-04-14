class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=-1;
        int dist=INT_MAX;
        for(int i=0;i<points.size();i++){
            if(x==points[i][0] or y==points[i][1]){
                int sum=abs(x-points[i][0])+abs(y-points[i][1]);
            if(sum<dist){
                dist=sum;
                ans=i;
            }
            }
        }
        return ans;
    }
};