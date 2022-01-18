class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26];
        char ans;
        for(int i=0;i<26;i++){
            arr[i]=0;
        }
        for(int i=0;i<s.length();i++){
            arr[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++){
            arr[t[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]%2!=0){
                ans=i+97;
            }
        }
        return ans;
    }
};