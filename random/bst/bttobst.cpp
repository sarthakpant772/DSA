#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void storBST(Node* root, vector<Node*> & a){
    if(root==NULL)
        return ;
    storBST(root->left,a);
    a.push_back(root);
    storBST(root->right,a);
}

Node* bttobstex(vector<Node*> a, int start, int end){
    if(start>end)
        return NULL;
    int mid=(start+end)/2;
    Node* root=a[mid];
    root->left=bttobstex(a,start,mid-1);
    root->right=bttobstex(a,mid+1,end);
    return root;
}
Node* bttobst(Node* root){
    vector<Node*>a;
    storBST(root,a);

    int n=a.size();
    return bttobstex(a,0,n-1);
}