class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = INT_MIN;
        vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int cnt = 0;
                if(grid[i][j]==1){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j] = 2;
                    while(!q.empty()){
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();
                        cnt++;
                        
                        for(int i=0;i<4;i++){
                            int row = r+dir[i][0];
                            int col = c+dir[i][1];
                            if(row>=0 && col>=0 && row<grid.size() && col<grid[0].size() && grid[row][col]==1){
                                q.push({row,col});
                                grid[row][col] = 2;
                            }
                        }
                    }
                }
                maxArea = max(maxArea,cnt);
            }
        }
        return maxArea;
    }
};