// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        int v=1,h=1;//v->x,, h->y
        
        vector<pair<int,int>> p;
        for(int i=0;i<M;++i){
            p.push_back({X[i],0});
        }
        for(int i=0;i<N;++i){
            p.push_back({Y[i],1});
        }
        sort(p.begin(),p.end());
        int cost=0;
        for(int i=p.size()-1;i>=0;--i){
            if(p[i].second==0){
                cost+=p[i].first*v;
                h++;
            }
            else{
                cost+=p[i].first*h;
                v++;
            }
            
            
        }
        
        return cost;
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<int>X(m - 1), Y(n - 1);
	    for(int i = 0; i < m - 1; i++){
	        cin >> X[i];
	    }
	    for(int i = 0; i < n - 1; i++){
	        cin >> Y[i];
	    }
	    Solution ob;
	    int ans = ob.minimumCostOfBreaking(X, Y, m - 1, n - 1);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends