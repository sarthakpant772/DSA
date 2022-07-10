class Solution {
public:
    int help(vector<int> cost, vector<int> &dp, int i,int n){
        if(i==n-1){
            return cost[i];
        }
        if(i>=n){
            return 0;
        }
        if(dp[i]!=INT_MAX){
            return dp[i];
        }
        
        int c= min(help(cost,dp,i+1,n),help(cost,dp,i+2,n));
        dp[i]=c+cost[i];
        return dp[i];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        vector<int> dp(n,INT_MAX);
        return min(help(cost,dp,0,n),help(cost,dp,1,n));
    }
};