// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        vector<int> dp(n);
        for(int i=0;i<n;++i){
            dp[i]=arr[i];
        }
        
        int ans=INT_MIN;
        for(int i=1;i<n;++i){
            dp[i]=max({dp[i],dp[i]+dp[i-1]});
            ans=max(ans,dp[i]);
        }
        ans=max(ans,dp[0]);
        return ans;
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends