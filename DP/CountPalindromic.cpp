// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
   
    long long int  countPS(string str)
    {
       int n=str.size();
       long long int m=1e9+7;
       vector<vector<long long int>> dp(n,vector<long long int>(n,0));
       for(int g=0;g<n;g++){
           for(int i=n-1-g;i>=0;i--){
               int j=i+g;
               if(i==j){
                   dp[i][j]=1;
               }
               else{
                   if(str[i]==str[j]){
                       dp[i][j]=(dp[i+1][j]+dp[i][j-1]+1)%m;
                   }
                   else{
                       dp[i][j]=(dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1]+m)%m;
                   }
               }
           }
       }
       
       return dp[0][n-1];
    }
     
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  // } Driver Code Ends