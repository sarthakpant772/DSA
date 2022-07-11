// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int AlternatingaMaxLength(vector<int>&nums){
		    // Code here
		    int n=nums.size();
		    vector<int> dp(n,1);
		    if(n==1)
		        return 1;
		       
		    int flag = nums[0]>nums[1]?0:1;
		    
		    for(int i=1;i<n;++i){
		        if(nums[i]>nums[i-1] and flag==1){
		            dp[i]=dp[i-1]+1;
		            flag=0;
		        }
		        else if(nums[i]<nums[i-1] and flag==0){
		            dp[i]=dp[i-1]+1;
		            flag=1;
		        }
		        else{
		            dp[i]=dp[i-1];
		        }
		    }
		    return dp[n-1];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.AlternatingaMaxLength(nums);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends