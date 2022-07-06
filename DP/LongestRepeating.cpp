// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string s){
		    // Code hereint 
		    int n= s.size();
		    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
		    for(int i=0;i<=n;++i){
		        for(int j=0;j<n+1;++j){
		            if(i==0 || j==0)
		                dp[i][j]=0;
		            else{
		                if(i == j or s[i-1]!=s[j-1] ){
		                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		                }
		                else{
		                    dp[i][j]=dp[i-1][j-1]+1;
		                }
		            }
		        }
		    }
		    
		    return dp[n][n];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends