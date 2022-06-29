// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        vector<int> a,b;
        for(int i=0;i<N;++i){
            a.push_back(candies[i]);
            b.push_back(candies[i]);
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>() );
        
        int k=0;
        int n=N;
        int minCost=0;
        int i=0;
        while(i<n){
            minCost+=a[i];
            i++;
            n-=K;
        }
        i=0;
        int maxCost=0;
        n=N;
        while(i<n){
            maxCost+=b[i];
            i++;
            n-=K;
        }
        
        return {minCost,maxCost};
    }   
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends