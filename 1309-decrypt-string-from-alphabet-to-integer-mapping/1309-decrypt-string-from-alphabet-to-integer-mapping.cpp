class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        int n= s.size();
        for(int i=0; i<n; i++){
            if((s[i] == '1' or s[i] == '2') and (i<(n-2)) and (s[i+2] == '#')){
                ans+= string(1,'j'+(((s[i+1]-'0') + (s[i]-'0')*10)-10));
                i+=2;
            }
            else{
                ans += string(1, 'a'+(s[i]-'1'));
            }
        }
        return ans;
    }
};