class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c=0;
        for (int i=digits.size()-1; i>=0; i--){
            int tmp=digits[i];
            digits[i]=(i==digits.size()-1) ?(digits[i]+1)%10 : ((digits[i])+c)%10;
            c=((digits[i]%10)==0 && tmp)? 1 : 0 ;
        }
        if (digits[0]==0 && c==1)
            digits.insert(digits.begin(),1);
        return digits;
    }
};