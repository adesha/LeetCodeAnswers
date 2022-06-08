class Solution {
public:
    bool checkPal(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return (checkPal(s,i,j-1) or checkPal(s,i+1,j));
            }
            i++;
            j--;
        }
        return true;
    }
};