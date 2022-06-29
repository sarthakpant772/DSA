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
    Node* temp= head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    
}

void insert(Node* &head,int x){
    Node* temp= new Node(x);
    
    if(head==NULL){
        head=temp;
        temp->next=head;
        return ;
    }
    
    Node *loop= head;
    
    while(loop->next!=head){
        loop=loop->next;
    }
    
    loop->next=temp;
    temp->next=head;
    
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