// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    bool helper(string s, vector<string> b, int n,int m,int i, vector<int> & dp){
        if(i>=n){
            return true;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j=0;j<m;++j){
            if(b[j]==s.substr(i,b[j].size())){
                bool temp=helper(s,b,n,m,i+b[j].size(),dp);
                if(temp){
                    return dp[i]=true;
                }
            }

            
        }
        return dp[i]=false;
    }

    int wordBreak(string A, vector<string> &B) {
        //code here
        vector<int> dp(A.size(),-1);
        return helper(A,B,A.size(),B.size(),0,dp);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends