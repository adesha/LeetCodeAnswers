// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
  
  
    vector<int> primeRange(int m, int n) {
        // code here
        vector<int>v;
       for(int i=m;i<=n;++i){
          int cnt=0;
         for(int j=2;j<=sqrt(i);++j){
             if(i%j==0){
                 cnt=1;
                 break;
             }
         }
         if(cnt==0&&i>1){
             v.push_back(i);
         }
       }
       return v;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends