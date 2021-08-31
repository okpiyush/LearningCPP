#include <iostream>
using namespace std;

class node{
    public:
    int data; 
    node* next;//node*


    node (int value){
        data=value;
        next=NULL;
    } 
};


void insertatStart(node* &head,int value){
    node* n= new node(value);
    n->next=head;
    head=n;
}

void insertinBetween()

void display(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    int k;
    int temp;
    cin>>k;
    for (int i=0;i<k;i++){
        cin>>temp;
        insertatStart(head,temp);
    }
    display(head);
}