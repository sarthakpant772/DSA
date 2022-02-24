// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution
{
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<int,int>> check1(n);
        for (int i = 0; i < n; ++i)
        {
            check1.push_back({arr[i].value / arr[i].weight,i});
        }
        sort(check1.begin(),check1.end(),greater<int> ());

        int ans = 0, check = 0;
        int i=0;
        while(check<=W){

            int x=min(arr[i].weight,W-check);
            check+=x;
            ans+=x*arr[i].value;
            W-=x;

        }


        cout<<ans<<endl;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(2) << fixed;
    while (t--)
    {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
} // } Driver Code Ends