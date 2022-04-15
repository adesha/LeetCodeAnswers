class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i-1])!=abs(arr[i+1]-arr[i])){
                return false;
            }
        }
        return true;
    }
};