#include <bits/stdc++.h>
using namespace std;
 
// utility function to print contents of
// a vector from index i to it's end
void printVector(const vector<int>& v, int i)
{
    for (int j = i; j < v.size(); j++)
        cout << v[j] << " ";
    cout << endl;
}
 
// binary tree node
struct Node {
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void printVectors(vector<int> p,int n){
    for(int i=0;i<n;++i){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void PathUtil(Node* root, vector<int> &path,int k){
    if(!root)
        return;
    path.push_back(root->data);

    
    
    PathUtil(root->left,path,k);

    PathUtil(root->right,path,k);

    int sum=0;

    for(int i=path.size();i>=0;--i){
        sum+=path[i];
        if(sum==k)
            printVectors(path,i);
    }

    path.pop_back();

}

void printKPath(Node* root, int k){
    vector<int> path;
    PathUtil(root,path,k);
}



int main()
{
    Node* root = new Node(1);
    root->left = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->left->right->left = new Node(1);
    root->right = new Node(-1);
    root->right->left = new Node(4);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(2);
    root->right->right = new Node(5);
    root->right->right->right = new Node(2);
 
    int k = 5;
    printKPath(root, k);
 
    return 0;
}