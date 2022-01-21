class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        while(i>=0){
            if(s[i]==' '){
                s.erase(s.begin()+i);
                i--;
            }
            else{
                break;
            }
        }
        int count=0;
        while(i>=0){
            if(s[i]!=' '){
                count++;
                i--;
            }
            else{
                break;
            }
        }
        return count;
    }
};