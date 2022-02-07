class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>s;
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j){
                    int n=words[i].find(words[j]);
                    if(n!=string::npos){
                        s.insert(words[j]);
                    }
                }
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};