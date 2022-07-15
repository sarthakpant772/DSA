// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    
    int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    
	   pair<int,int> src={KnightPos[0]-1,KnightPos[1]-1};
   pair<int,int> des={TargetPos[0]-1,TargetPos[1]-1};
     
   vector<vector<bool>> vis(N,vector<bool> (N,false));  
     
       int cx[]={-1,-1,1,1,-2,-2,2,2};
       int cy[]={-2,2,-2,2,-1,1,-1,1};
       
       queue<pair<int,int>> q;
       int steps=0;
       
       q.push(src);
       vis[src.first][src.second]=1;
       
       while(!q.empty()){
           
           int num=q.size();
           
           for(int i=0;i<num;i++){
               pair<int,int> temp=q.front();
               q.pop();
           
               if(temp==des){
                   return steps;
               }
           
               //1 step se kaha kaha tk pahuch skte h;
               for(int i=0;i<8;i++){
                   int mx=temp.first+cx[i];
                   int my=temp.second+cy[i];
                   if(mx>=0 && mx<=N-1 && my>=0 && my<=N-1 && !vis[mx][my]){
                      q.push({mx,my});
                      vis[mx][my]=1;
                   } 
               }    
           } 
            steps++;  
       }
       
       return -1; 
	}
	    

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends