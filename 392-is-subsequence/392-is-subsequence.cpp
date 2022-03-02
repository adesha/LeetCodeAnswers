class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.length();
        int m=s.length();
        if(m==0){
            return true;
        }
        int j=0,i=0;
        while(i<n and j<m){
            if(s[j]==t[i]){
                j++;
                i++;
            }
            else{
                i++;
            }
            if(j==m){
                return true;
            }
        }
        return false;
    }
};