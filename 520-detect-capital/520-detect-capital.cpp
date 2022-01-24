class Solution {
public:
    bool detectCapitalUse(string s) {
        int c=0,m=0,a=0,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]>=65 and s[i]<=90){
                c=1;
            }
            else{
                c=0;
                break;
            }
        }
        if(c==1){
            return true;
        }
        for(int i=0;i<n;i++){
            if(s[i]>=97 and s[i]<=122){
                m=1;
            }
            else{
                m=0;
                break;
            }
        }
        if(m==1){
            return true;
        }
        if(s[0]>=65 and s[0]<=90){
            for(int i=1;i<n;i++){
                if(s[i]>=97 and s[i]<=122){
                a=1;
            }
            else{
                a=0;
                break;
            }
            }
        }
        else{
            return false;
        }
        if(a==1){
            return true;
        }
        return false;
    }
};