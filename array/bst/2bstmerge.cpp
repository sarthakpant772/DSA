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

vector<int> merge(vector<int> arr1,vector<int> arr2){

    vector<int> mer;

    int n=arr1.size();
    int m=arr2.size();

    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            mer.push_back(arr1[i]);
            i++;
        }
        else{
            mer.push_back(arr2[j]);
            j++;
        }
        k++;
    }

    while(i<n){
        mer.push_back(arr1[i]);
        i++;
    }

    while(j<m){
        mer.push_back(arr2[j]);
        j++;
    }

    return mer;
}


void storein(Node* root,vector<int> &arr1){

    if(root==NULL)
        return;
    
    storein(root->left,arr1);
    arr1.push_back(root->data);
    storein(root->right,arr1);
    return;
}

Node* createbst(vector<int> a,int start,int end){
    
    if(start>end)
        return NULL;
    int mid=(start+end)/2;
    Node* root=new Node(a[mid]);
    root->left=createbst(a,start,mid-1);
    root->left=createbst(a,mid+1,end);
    return root;
}

Node* mergetree(Node* root1,Node* root2,int n,int m){
    vector<int> arr1;
    vector<int> arr2;

    storein(root1,arr1);

    storein(root2,arr2);

    vector<int> ans;
    ans=merge(arr1,arr2);

    return createbst(ans,0,ans.size());
}
