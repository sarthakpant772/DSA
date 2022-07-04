#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left,*right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

void insert(Node* &root,int x){
    Node* temp = new Node(x);
    if(root==NULL){
        root=temp;
        return;
    }

    Node* trev=root;
    Node* check=NULL;
    while(trev!=NULL){
        check=trev;
        if(x<trev->data){
            trev=trev->left;
        }
        else{
            trev=trev->right;
        }
    }
    
    // cout<<check->data<<endl;

    if(x<check->data){
        check->left=temp;
    }
    else{
        check->right=temp;
    }


}

void Inorder(Node* root)
{
    if (root == NULL)
        return;
    else {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

void preoder(Node* root){
    if(root==NULL)
        return;
    else{
        cout<<root->data<<" ";
        preoder(root->left);
        preoder(root->right); 
    }
}

void postorder(Node* root){
    if(root==NULL)
        return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

void leverOrder(Node* root){
    if(root==NULL)
        return ;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right); 
    }

}


int main(){

    Node* root = NULL;
    insert(root, 10);
    insert(root, 7);
    insert(root, 9);
    insert(root, 3);
    insert(root, 11);
    insert(root, 1);
    insert(root, 6);
    leverOrder(root);


}