class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;
        unordered_set<char>hashset;
        while(j<s.size())
        {
            while(i<j && hashset.find(s[j])!=hashset.end())
            {
                hashset.erase(s[i++]);
            }
            hashset.insert(s[j++]);
            ans=max(ans,j-i);
        }
        return ans;
    }
};