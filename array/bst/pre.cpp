#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node* preorder(int pre[],int &preind,int start,int end,int size){
    if(start>end || preind>=size)
        return NULL;
    
    Node* root=new Node(pre[preind]);

    preind++;

    if(start==end)
        return root;

    int i;
    for(int i=start;i<=end;++i){
        if(pre[i]>root->data)
            break;
    }

    root->left=preorder(pre,preind,start,i-1,size);
    root->right=preorder(pre,preind,i,end,size);


    return root;


}