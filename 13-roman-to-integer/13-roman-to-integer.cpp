class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='I'){
                if(i+1 <s.length() and (s[i+1]=='V' or s[i+1]=='X')){
                    ans-=1;
                }
                else{
                    ans++;
                }
            }
            if(s[i]=='V'){
                ans+=5;
            }
            if(s[i]=='X'){
                if(i+1 <s.length() and (s[i+1]=='L' or s[i+1]=='C')){
                    ans-=10;
                }
                else{
                    ans+=10;
                }
            }
            if(s[i]=='L'){
                ans+=50;
            }
            if(s[i]=='C'){
                if(i+1 <s.length() and (s[i+1]=='D' or s[i+1]=='M')){
                    ans-=100;
                }
                else{
                    ans+=100;
                }
            }
            if(s[i]=='D'){
                ans+=500;
            }
            if(s[i]=='M'){
                ans+=1000;
            }
        }
        return ans;
    }
};