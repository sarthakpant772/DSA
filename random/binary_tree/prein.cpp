// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int ind=0;
    int n1;
    int search(int in[],int start,int end,int curr){
        for(int i=start;i<=end;++i){
            if(in[i]==curr)
                return i;
        }
        
    }
    
    Node* bTree(int in[],int pre[],int start,int end){
        
        
        if(start>end || end<0 || ind>=n1)
            return NULL;
            
        int cur=pre[ind];
        ind++;
        Node* t= new Node(cur);
        if(start==end)
            return t;
        int pos=search(in,start,end,cur);

        t->left=bTree(in,pre,start,pos-1);
        t->right=bTree(in,pre,pos+1,end);
        return t;

    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        n1=n;
        int start=0,end=n-1;
        return bTree(in,pre,start,end);
        
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends