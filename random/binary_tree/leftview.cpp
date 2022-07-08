#include<iostream>
#include<stack>
#include<queue>

using namespace std;
 

struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void inorder(Node* root){
    if(root==nullptr) 
        return ;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void leftview(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        
        int n=q.size();
        for(int i=1;i<=n;++i){
            Node* temp=q.front();
            q.pop();
            if(i==1){
                cout<<temp->data<<" ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    leftview(root);
 
    return 0;
}