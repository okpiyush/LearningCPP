#include <iostream>
#include <climits>
using namespace std;


class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void seclar(node* &head){
    int lar=INT_MIN;
    int seclar=INT_MIN;

    node *temp=head;
    while(temp->next!=NULL){
        if((temp->data)>lar){
            lar=temp->data;
            seclar=lar;
        }else if((temp->data)>seclar && temp->data!=lar){
            seclar=temp->data;
        }
        temp=temp->next;
    }
    cout<<"second largest : "<<seclar<<endl;
}
 void insert(node* &head,int val){
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
        insert(head,temp);
    }
    display(head);
    seclar(head);
}