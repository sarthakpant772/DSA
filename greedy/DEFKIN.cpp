#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> X,vector<int> Y, int x, int y){
    sort(X.begin(),X.end());
    sort(Y.begin(),Y.end());

    int maX=0,maY=0;
    for(int i=0;i<X.size()-1;++i){
        maX= max(abs(X[i]-X[i+1]), maX);
        maY= max(abs(Y[i]-Y[i+1]), maY);
    }
    
    maY--;
    maX--;
    
    return maX*maY;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int X,Y,n;
    cin>>X>>Y>>n;
    vector<int> x,y;
    x.push_back(0);
    y.push_back(0);
    for(int i=0;i<n;++i){
        int temp =0;
        cin>>temp;
        x.push_back(temp);
        cin>>temp;
        y.push_back(temp);
        
    }
    x.push_back(X+1);
    y.push_back(Y+1);
    cout<<solve(x,y,X,Y)<<endl;
    }

	// your code goes here
	return 0;
}