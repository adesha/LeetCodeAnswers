class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++){
            int l=sentences[i].size();
            int count=0;
            for(int j=0;j<l;j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            ans=max(ans,count);
        }
        return ans+1;
    }
};