// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPathHelp(int N , vector<vector<int>> Matrix, vector<vector<int>> &dp, int i,int j){
        if(i==N || j==N || i<0 || j<0){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int x=max({maximumPathHelp(N,Matrix,dp,i+1,j),maximumPathHelp(N,Matrix,dp,i+1,j+1),maximumPathHelp(N,Matrix,dp,i+1,j-1)});
        dp[i][j]=Matrix[i][j]+x;
        
        return dp[i][j];
    }
    
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        vector<vector<int>> dp(N,vector<int>(N,-1));
        
        for(int i=0;i<N;++i){
            maximumPathHelp(N,Matrix,dp,0,i);
        }
        int ma=-1;
        for(int i=0;i<N;++i){
            ma=max(ma,dp[0][i]);
        }
        return ma;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends