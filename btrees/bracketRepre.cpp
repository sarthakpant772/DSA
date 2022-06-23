#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has data, pointer to left
   child and a pointer to right child */
struct Node {
    int data;
    Node *left, *right;
};
/* Helper function that allocates a new node */
Node* newNode(int data)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 
/* This function is here just to test  */
void preOrder(Node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
int findIndex(string str, int si, int ei)
{
    if (si > ei)
        return -1;
 
    // Inbuilt stack
    stack<char> s;
 
    for (int i = si; i <= ei; i++) {
 
        // if open parenthesis, push it
        if (str[i] == '(')
            s.push(str[i]);
 
        // if close parenthesis
        else if (str[i] == ')') {
            if (s.top() == '(') {
                s.pop();
 
                // if stack is empty, this is
                // the required index
                if (s.empty())
                    return i;
            }
        }
    }
    // if not found return -1
    return -1;
}



Node* treeFromString(string str,int si,int ei){
    
    Node* root=NULL;
    int index =-1;
    if(si>ei)
        return NULL;
    
    if(si+1<ei && str[si+1]=='(')
        index = findIndex(str,si+1,ei);
    
    if(index!=-1){
        root->left = treeFromString(str,si+2,index-1);
        root->right = treeFromString(str,index+2,ei-1);
    }
    return root;
    
}


int main()
{
    string str = "4(2(3)(1))(6(5))";
    Node* root = treeFromString(str, 0, str.length() - 1);
    preOrder(root);
}