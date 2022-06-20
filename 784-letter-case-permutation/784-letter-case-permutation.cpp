class Solution {
public:
   vector<string>ans;
    void solve(int ind , string temp , string s,  int n)
    {
        if(ind==n)
        {
            ans.push_back(temp);
            return;
        }
        int k = s[ind]-0;
        if(k > 57)
        {
            if(k>=97)
            {
                temp+=s[ind];
                solve(ind+1,temp,s,n);
                temp.pop_back();
                temp+=char(s[ind]-32);
                solve(ind+1,temp,s,n);
            }
            else
            {
                temp+=s[ind];
                solve(ind+1,temp,s,n);
                temp.pop_back();
                temp+=char(s[ind]+32);
                solve(ind+1,temp,s,n);
            }
        }
        else
        {
            temp+=s[ind];
            solve(ind+1,temp,s,n);
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        int n = s.size();
        string temp;
        solve(0,temp,s,n);
        return ans;
    }
};