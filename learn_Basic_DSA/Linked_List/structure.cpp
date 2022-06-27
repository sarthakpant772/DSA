#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};

int main(){
    Node *head=new Node(7);

    cout<<head->data;
    return 0;

}