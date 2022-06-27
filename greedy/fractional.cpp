// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,int>> v;
        for(int i=0;i<n;++i){
            double p=(double)arr[i].value/(double)arr[i].weight;
            v.push_back({p,arr[i].weight});
        }
        sort(v.begin(),v.end());
        double count=0;
        int p=0;
        for(int i=n-1;i>=0;i--){
            if(p+v[i].second<=W){
                count+=v[i].second*v[i].first;
                p+=v[i].second;
            }
            else{
                count+=min((W-p),v[i].second)*v[i].first;
                W-=(W-p);
            }
                
        }
        
        return count;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends