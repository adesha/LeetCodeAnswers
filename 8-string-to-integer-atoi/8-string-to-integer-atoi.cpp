class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        int flag=1;
        int n=s.length();
        int i=0;
        while(i<n and s[i]==' '){
            i++;
        }
        if(i<n and s[i]=='+'){
            flag=1;
            i++;
        }
        else if(i<n and s[i]=='-'){
            flag=-1;
            i++;
        }
        while(i<n and isdigit(s[i])){
            int digit=s[i]-'0';
            if ((ans > INT_MAX / 10) || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) { 
                    
                return flag == 1 ? INT_MAX : INT_MIN;
            }
            ans=10*ans+digit;
            i++;
        }
        return flag*ans;
    }
};