// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool  isPalindrom(int i,int j,string s) {
       while(i < j) {
           if(s[i]!=s[j])
           return false;
           i++;j--;
       }
       return true;
   }
   int f(string s,int i,vector<int> &dp) {
       if(i == s.length())
       return 0;
       if(dp[i] != -1)
       return dp[i];
       int minCut = INT_MAX;
       for(int j=i;j<s.length();j++) {
           if(isPalindrom(i,j,s)) {
               minCut = min(minCut,1+f(s,j+1,dp));
           }
       }
       
       return dp[i] = minCut;
       
   }
   int palindromicPartition(string str)
   {
       // code here
       int n = str.length();
       vector<int> dp(n+1,-1);
       return f(str,0,dp) - 1;
       
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends