class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
    //2.removing starting spaces
    int i=0;
    while(i<s.length() && s[i]==' '){
        s.erase(s.begin());
    }
    //3.removing ending spaces
    i=s.length()-1;
    while(i>=0 && s[i]==' '){
        s.erase(s.begin()+i);
        i--;
    }
    //4.reversing words to make them correct
    for(int i=0; i<s.length(); i++)
    {
        int j=i;
        while(j<s.length() && s[j]!=' '){
            j++;
        }
        reverse(s.begin()+i,s.begin()+j);
        i=j;
    }
    //5.removing duplicates spaces between the words
    i=1;
    while(i<s.length()){
        if(s[i]==' ' && s[i+1]==' ') s.erase(s.begin()+i);
        else i++;
    }
    return s;
    }
};