// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int d){
          // code here 
       if((9*d)<S)return "-1";
       string ans="";
       for(int i=d-1;i>=0;i--){
           if(S>9){
               ans ='9'+ans;
               S=S-9;
           }
           else{
               if(i==0){
         ans =to_string(S) +ans; // if only one space is available
               }
               else{
                   ans=to_string(S-1)+ans;  // more space are left
                   i--;
                   while(i>0){
                       ans='0'+ans;
                       i--;
                   }
                   ans='1'+ans;
                   break ;
               }
           }
       }
       return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   // } Driver Code Ends