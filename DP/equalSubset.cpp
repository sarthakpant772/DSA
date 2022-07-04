// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int ep(vector<vector<int>>&dp, int i, int ans, int sum, int arr[] )
   {
       if(i==0)
       {
           return((ans+arr[0])==(sum-arr[0]));
       }
       if(ans==sum)return 1;
       
       if(dp[i][sum]!=-1)return dp[i][sum];
       
       int nt=0,t=0;
       
       nt= ep(dp,i-1,ans,sum,arr);
       
       if(ans<sum)
       {
        t= ep(dp,i-1,ans+arr[i], sum-arr[i],arr);
       }
       
      return dp[i][sum]= (nt or t);
       
   }

   
   int equalPartition(int N, int arr[])
   {
     
      int sum=0;
      for(int i=0; i<N; i++)
      {
          sum+= arr[i];           
      }
      if(sum%2!=0)return 0;
      
      vector<vector<int>>dp(N, vector<int>(sum+1,-1));
      
      return ep(dp,N-1, 0, sum,arr);
      
       
      
      
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends