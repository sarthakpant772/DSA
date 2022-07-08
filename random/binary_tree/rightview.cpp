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

void rightview(Node* root){
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
            if(temp->right){
                q.push(temp->left);
            }
            if(temp->left){
                q.push(temp->right);
            }
        }
    }
}

void topview(Node* root){
    queue<pair<Node*,int>> a;
    a.push(make_pair(root,0));
    int hd=0,l=0,r=0;

    stack<int> left;
    vector<int> right;

    Node* help;

    while(a.size()){
        help=a.front().first;
        hd=a.front().second;

        if(hd<l){
            left.push(help->data);
            l=hd;
        }
        if(hd>r){
            right.push_back(help->data);
            r=hd;
        }   
        if(help->left)
            a.push(make_pair(help->left,hd-1));
        if(help->right)
            a.push(make_pair(help->right,hd+1));

        a.pop();
    }
    vector<int> sol;
    while(left.size()){
        cout<<left.top()<<" ";
        sol.push_back(left.top());
        left.pop();
    }

    for(auto x: right){
        cout<<x<<" ";

        sol.push_back(x);
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
 
    topview(root);
 
    return 0;
}