// { Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 // } Driver Code Ends
// Complete this function
int dp[1001][3];
int solve(vector<int>&a,long long int n,int i){
    if(i>=3||n<0)return 0;
    if(n==0)return 1;
    if(dp[n][i]!=-1)return dp[n][i];
    return dp[n][i]=solve(a,n-a[i],i)+solve(a,n,i+1);
}

long long int count(long long int n)
{
    memset(dp,-1,sizeof(dp));
vector<int>a(3);
a[0]=3;
a[1]=5;
a[2]=10;
    return solve(a,n,0);
}

// { Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends