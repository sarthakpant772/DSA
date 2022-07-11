// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findWinner(int N, int X, int Y)
	{
		// Your code goes here
		
		vector<bool> dp(N+1);
		dp[0]=false;
		dp[1]=true;
		for(int i=2;i<=N;++i){
		    if(i-1>=0 and !dp[i-1]){
		        dp[i]=true;
		    }
		    else if(i-X>=0 and !dp[i-X]){
		        dp[i]=true;
		    }
		    else if(i-Y>=0 and !dp[i-Y]){
		        dp[i]=true;
		    }
		    else{
		        dp[i]=false;
		    }
		    
		}
		
		return dp[N];
	}
	

};
	

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
       	int n, x, y;
       	cin >> n >> x >> y;

       

        Solution ob;
        cout << ob.findWinner(n, x, y);
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends