// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
     long long fun(int arr[],int i,int j,int size,vector<vector<long long>>& dp){
      if(i>=j)return 0;
      if(dp[i][j]!=-1)return dp[i][j];
       long long x=arr[i]+min(fun(arr,i+1,j-1,size,dp),fun(arr,i+2,j,size,dp));
       long long y=arr[j]+min(fun(arr,i+1,j-1,size,dp),fun(arr,i,j-2,size,dp));
       return dp[i][j]=max(x,y);
   }
    long long maximumAmount(int arr[], int n){
        // Your code here
        vector<vector<long long>>dp(n+1,vector<long long>(n+1,-1));
       return fun(arr,0,n-1,n,dp);
    }
};

// { Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends