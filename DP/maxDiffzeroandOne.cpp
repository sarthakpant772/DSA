// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string s)
	{
	    // Your cod goes here
	    int n = s.size();
	    vector<int> dp(n,0);
	    if(s[0]=='0')
	        dp[0]=1;
	        int flag=0;
	    for(int i=1;i<n;++i){
	        if(s[i]=='0'){
	            dp[i]=1+dp[i-1];
	        }
	        else{
	            dp[i]=max(0,dp[i-1]-1);
	        }
	    }
	    int ans=-1;
	    for(int i=0;i<n;++i){
	       // cout<<dp[i]<<" ";
            ans=max(ans,dp[i]);
	    }
	    return (ans==0)?-1:ans;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends