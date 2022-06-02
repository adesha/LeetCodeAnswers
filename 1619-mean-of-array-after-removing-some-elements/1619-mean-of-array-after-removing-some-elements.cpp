class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int sum=0;
        int rem=(n*5)/100;
        for(int i=rem;i<n-rem;i++){
            sum+=arr[i];
        }
        return (double)sum/(n-2*rem);
    }
};