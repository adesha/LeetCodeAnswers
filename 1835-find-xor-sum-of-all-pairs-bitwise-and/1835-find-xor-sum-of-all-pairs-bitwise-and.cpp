class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int a=0,b=0;
        for(int i=0;i<arr1.size();i++){
            a=a^arr1[i];
        }
        for(int i=0;i<arr2.size();i++){
            b=b^arr2[i];
        }
        return a&b;
    }
};