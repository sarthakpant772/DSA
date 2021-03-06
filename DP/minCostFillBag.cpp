// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        vector<vector<int>> dp(N+1, vector<int>(W+1));
	    
	    for(int i=0; i<=W; i++){
	        dp[0][i] = 1000000;
	    }
	    for(int i=0; i<=N; i++){
	        dp[i][0] = 0;
	    }
	    
	    for(int i=1; i<=N; i++){
	        for(int j=1; j<=W; j++){
	            if(cost[i-1] != -1){
	                if(j-i >= 0){
	                    dp[i][j] = min(dp[i-1][j], cost[i-1] + dp[i][j-i]);
	                }
	                else{
	                    dp[i][j] = dp[i-1][j];
	                }
	            }
	            else{
	                dp[i][j] = dp[i-1][j];
	            }
	        }
	    }
	    
	    return (dp[N][W] >= 1000000) ? -1 : dp[N][W];
	} 
};


// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends