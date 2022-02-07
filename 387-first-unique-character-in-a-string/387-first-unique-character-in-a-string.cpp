class Solution {
public:
    int firstUniqChar(string s) {
        if(s.length()==1){
            return 0;
        }
        int ans=-1;
        int flag=1;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length();j++){
                if(s[i]==s[j] and i!=j){
                    flag=0;
                    break;
                }
                else{
                    flag=1;
                }
            }
            if(flag==1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};