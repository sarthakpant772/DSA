// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool solve(vector<int> adj[],vector<bool> &visited,vector<bool> &order,int temp){
        visited[temp]=true;
        order[temp]=true;
        for(auto it :adj[temp]){
            if(!visited[it]){
                if(solve(adj,visited,order,it))
                    return true;
            }
            else{
                if(order[it])
                    return true;
            }
        }
        order[temp]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> visited(V,false);
        vector<bool> order(V,false);
        for(int i=0;i<V;++i){
            if(!visited[i])
            {
                if(solve(adj,visited,order,i))    
                    return true;
            }
            
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends