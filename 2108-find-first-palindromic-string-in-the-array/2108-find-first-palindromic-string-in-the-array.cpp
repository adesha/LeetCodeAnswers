class Solution {
public:
    bool pal(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            if(pal(words[i])==true){
                ans=words[i];
                return ans;
            }
        }
        return ans;
    }
};