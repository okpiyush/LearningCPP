#include <iostream>
using namespace std;
class node {
    public :
    int data;
    node * next;
    node * prev;
    node(int val){
        data = val;
        next =NULL;
    }

};

void insert(node* &head,int val){
    node *n= new node(val); //create new node
    if(head==NULL){ //check if head already exists
        head=n; // if head doesn't exist, create head
        return;
    }
    node* temp=head; //assign head to temp node
    while(temp->next!=NULL){ //iterate through linked list
        temp=temp->next;//change value of temp node to next temp node
    }
    temp->next=n; // assign the created node to last node 
}
void display( node *head){
    node* temp=head; //assign head to temp node
    while(temp->next!=NULL){ //iterate through linked list
        temp=temp->next;//change value of temp node to next temp node
    }
    while (temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->prev;
    }
    

}
void revDisplay(){



}

int main(){

    node* head=NULL;
    int k;
    int temp;
    cin>>k;
    for (int i=0;i<k;i++){
        cin>>temp;
        insert(head,temp);
    }
    display(head);



    return 0;
}