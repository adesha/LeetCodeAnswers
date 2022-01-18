class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,z=0;
        int arr[m+n];
        for(int k=0;k<m+n;k++){
            arr[k]=0;
        }
        while(i<m and j<n){
            if(nums1[i]<nums2[j]){
                arr[z]=nums1[i];
                i++;
                z++;
            }
            else{
                arr[z]=nums2[j];
                j++;
                z++;
            }
        }
        while(i<m){
            arr[z]=nums1[i];
            i++;
            z++;
        }
        while(j<n){
            arr[z]=nums2[j];
            j++;
            z++;
        }
        for(int k=0;k<n+m;k++){
            nums1[k]=arr[k];
        }
    }
};