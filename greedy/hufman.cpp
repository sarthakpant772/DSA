// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Node{
    public:
    int data;
    Node *left,*right;
    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};

struct cmp{
    bool operator() (Node* l , Node* r){
        return (l->data>r->data);
    }
};

class Solution
{
	public:
	    void preorder(Node *root, string s,vector<string> &ans){
	        if(root==NULL)
	        return;
	        
	        if(root->left == NULL and root ->right ==NULL)
	            ans.push_back(s);
	            
	       preorder(root->left,s+'0',ans);
	       preorder(root->right,s+'1',ans);
	    }
	    
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    vector<string> ans;
		    priority_queue<Node*,vector<Node*>,cmp>mh;
		    
		    for(int i=0;i<N;++i){
		        Node* root = new Node(f[i]);
		        mh.push(root);
		    }
		    
		    while(mh.size()!=1){
		        Node *left=mh.top();
		        mh.pop();
		        Node *right = mh.top();
		        mh.pop();
		        Node *parent= new Node(left->data+right->data);
		        parent->left=left;
		        parent->right=right;
		        mh.push(parent);
		    }
		    
		    Node *root=mh.top();
		    mh.pop();
		    
		    preorder(root,"",ans);
		    return ans;
		    
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}  // } Driver Code Ends