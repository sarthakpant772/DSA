// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    int solve(int start, int end , int n ,int k, vector<int> &a , vector<vector<int>> &dp){
        
        if(start==end){
            if(k>=0)
                return  dp[start][end]=n-1;
            else
                return dp[start][end]=n;
        }
        
        if(dp[start][end]!=-1)
            return dp[start][end];
            
        if(a[end]-a[start]<=k)
            return dp[start][end]=n-(end-start+1);
        
        return dp[start][end]=min(solve(start+1,end,n,k,a,dp),solve(start,end-1,n,k,a,dp));
        
    }
    
    int removals(vector<int>& a, int k){
        //Code here
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(0,n-1,n,k,a,dp);
        
    }
};


// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        int ans = ob.removals(a,k);
        
        cout<<ans<<endl;
    }
}


  // } Driver Code Ends