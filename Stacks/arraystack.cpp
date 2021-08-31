#include <iostream>
using namespace std;
int arr[10],top=0;
void push(int ent,int n){
    //top is the current index of the element
    if(top==n) cout<<"Filled and Heavy stack"<<endl;
    else if(top==0){
        arr[top]=ent;
        top+=1;
    }
    else
    {
        arr[top]=ent;
        top+=1;
    }
}
//kicks out the last element of the list
void pop(){
    if(top==-1) 
    {
        cout<<"Clean and Clear Stack"<<endl;
        return;
    }
    else
    {
        arr[top]=NULL;
        top-=1;
    }
}
int main(){
    push(32,10);
    push(45,10);
    push(17,10);
    push(25,10);
    push(65,10);
    push(2,10);
    push(3,10);
    push(52,10);
    push(37,10);
    push(7,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
    }






    return 0;
}