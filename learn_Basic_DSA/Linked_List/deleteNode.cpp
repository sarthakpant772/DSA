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

void deleteNode(Node* &head, int x){
        
    
    Node* t = new Node(x);
    
    Node* temp = head;
    
    if(temp->data==x){
        head=head->next;
        return;
    }
    while(temp->next->data!=x){
        temp=temp->next;
    }
    Node* del= temp->next;
    temp->next=temp->next->next;
    free(del);
    return;
}



int main(){
    Node *head=NULL;// next = null
    insert(head,0);
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    //5->0->1->2->3->4->NULL 
    printList(head);
    cout<<endl;
    deleteNode(head,5);
    printList(head);
    return 0;

}