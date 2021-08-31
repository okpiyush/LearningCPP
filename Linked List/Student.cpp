#include <iostream>
using namespace std;


class node{
    public:
    string data[2];
    node* next;

    node(string val[2]){
        data[0]=val[0];
        data[1]=val[1];

        next=NULL;
    }
};
 void insert(node* &head,string val[2]){
     node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }

     node* temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=n;
 }

void display(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data[0]<<" "<<temp->data[1]<<endl;
        temp=temp->next;
    }
}


int main(){
    node* head=NULL;
    int k;
    string temp[2]={};
    cin>>k;
    for (int i=0;i<k;i++){
        cout<<"Roll Number of the student no. ";
        cin>>temp[0];
        cout<<"Name of the student : ";
        cin>>temp[1];
        insert(head,temp);
    }
    display(head);
}