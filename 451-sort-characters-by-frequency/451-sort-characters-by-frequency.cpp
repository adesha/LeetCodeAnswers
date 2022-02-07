class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        multimap<int,char>ml;
        for(auto x:m){
            ml.insert({x.second,x.first});
        }
        for(auto it=ml.rbegin();it!=ml.rend();it++){
            for(int i=it->first;i>0;i--){
                ans+=it->second;
            }
        }
        return ans;
    }
};