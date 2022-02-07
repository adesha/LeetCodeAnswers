class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length() , c = 0;
        
        for(int i=0;i<n;)
        {
            if(c%2==0)
            {
                if(n-i < k)
                {
                    k = (n-i);
                }
                reverse(&s[i] , &s[i+k]);
            }
            i = i+k;
            c++;
        }
        return s;
    }
};