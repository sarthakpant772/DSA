// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      //Code here
      int n=a.size();
      vector<int> dp(n);
      for(int i=0;i<n;++i){
          dp[i]=a[i];
      }
      
      int ans=a[0];
      for(int i=1;i<n;++i){
          dp[i]=min(dp[i],dp[i-1]+dp[i]);
          ans=min(ans,dp[i]);
      }
      
      return ans;
  }
};


// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}  // } Driver Code Ends