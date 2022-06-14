class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
    int col = mat[0].size();
    if(row*col != r*c)
        return mat;
    else
    { 
        vector<vector<int>>res;
        vector<int>t;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                t.push_back(mat[i][j]);
                if(t.size() == c)
                {
                    res.push_back(t);
                    t.clear();
                }
            }
        }
        return res;
    }
    return mat;
    }
};