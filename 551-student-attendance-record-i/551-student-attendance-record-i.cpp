class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                a++;
            }
            if(s[i]=='L'){
                l++;
            }
            else{
                l=0;
            }
            if(a>1 || l>=3){
            return 0;
        }
        }
        return 1;
    }
};