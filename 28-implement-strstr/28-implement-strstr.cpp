class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0, n = haystack.size(), m = needle.size() ;

    if(m == 0)
        return 0 ;
		
    if(n < m)
        return -1 ;
    
    while(i < n)
    {
        if(i+m-1 < n && haystack[i] == needle[0] && haystack[i+m-1] == needle[m-1])  // V. IMP Condition for Optimisation Purpose
        {
            int j = 0,flag=0,temp=0 ;
			
            while(i < n && j < m && haystack[i] == needle[j])
            {
                if(flag == 0 && j != 0 && haystack[i] == needle[0]) {
                    flag = 1; 
                    temp = i ;
                }
                i++ ;
                j++ ;
            }
            if(j == m)
                return i-j ;
            else if(temp != 0)
                i  = temp ;
        }
        else
            i++ ;
    }
    return -1 ;
    }
};