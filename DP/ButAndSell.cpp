// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    //Write your code here..
   int mi,ma,n=price.size(),profit[n]={0};
   ma=price[n-1],mi=price[0];
   for(int i=n-2;i>=0;i--)
   {
       ma=max(ma,price[i]);
       profit[i]=max(profit[i+1],ma-price[i]);
   }   
   for(int i=1;i<n;i++)
   {
       mi=min(mi,price[i]);
       profit[i]=max(profit[i-1],profit[i]+(price[i]-mi));
   }
   return profit[n-1];
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}
  // } Driver Code Ends