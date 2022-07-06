// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int nCr(int n, int r){
        // code here
       if(n<r)
        return 0;
        
        
        vector<vector<int>> dp(n+1, vector<int>(r+1));
        int mod = 1e9+7;
        for(int i=0;i<=n;++i){
            for(int j=0;j<=r;++j){
                if(j==0){
                    dp[i][0]=1;
                }
                else
                if(i==0){
                    dp[i][j]=0;
                }
                else
                if(j>i){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=(dp[i-1][j]%mod+dp[i-1][j-1]%mod)%mod;
                }
                
                
            }
        }
        
        return dp[n][r];
            
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends