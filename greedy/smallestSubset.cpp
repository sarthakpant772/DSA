// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &a,int n){
        sort(a.begin(),a.end());
        long long  sum=0;
        long long  check=0;
        long long  count=0;
        for(int i=0;i<n;++i){
            sum+=a[i];
        }
        int i=n-1;
        while(i>=0 and sum>=check*2){
            check+=a[i];
            count++;
            i--;
        }
        return count;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends