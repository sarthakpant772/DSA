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

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void insert(Node* &head,int x){
    Node* temp= new Node(x);
    
    if(head==NULL){
        head=temp;
        return ;
    }
    
    Node *loop= head;
    
    while(loop->next!=NULL){
        loop=loop->next;
    }
    
    loop->next=temp;
    
}

void reversLL(Node* &head){
    Node* temp = head;
    Node* curr=temp, *prev=NULL,*nex=NULL;

    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    head=prev;
}



int main(){
    Node *head=NULL;// next = null
    insert(head,0);
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    reversLL(head);
    //5->0->1->2->3->4->NULL 
    printList(head);
    return 0;

}