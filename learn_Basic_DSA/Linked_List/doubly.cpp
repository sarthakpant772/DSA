#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;
    Node* prev= NULL;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void insert(Node* &head,int x){
    Node* newNode = new Node(x);
    Node* temp = head;
    if(head==NULL){
        head=newNode;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
    newNode->prev=temp;
    
}


int main(){
    Node *head=NULL;// next = null
    insert(head,0);
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    
    //5->0->1->2->3->4->NULL 
    printList(head);
    return 0;

}