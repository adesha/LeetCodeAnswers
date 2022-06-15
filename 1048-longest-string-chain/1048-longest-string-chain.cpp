class Solution {
public:
    bool check(int cur, int prev, vector<string>& words){
        int diff=0,i=0,j=0;
        while(i<words[cur].size() && j<words[prev].size()){
            if(words[cur][i]==words[prev][j]){
                i++;j++;
            }
            else{
                i++;
                diff++;
            }
        }
        return diff<2;
    }
	
    int longestStrChain(vector<string>& words) {
        vector<pair<int,int>> a[17];
        for(int i=0;i<words.size();i++){
            a[words[i].size()].push_back({i,1});
        }
        int ans=1;
        for(int i=2;i<17;i++){
            for(int j=0;j<a[i].size();j++){
                for(int k=0;k<a[i-1].size();k++){
                    if(check(a[i][j].first,a[i-1][k].first,words))
						a[i][j].second=max(a[i][j].second,a[i-1][k].second+1);
                }
                ans=max(ans,a[i][j].second);
            }
        }
        return ans;
    }
};