#include<iostream>
using namespace std;

int main(){
    // int marks[5]={1,2,3,4};
    // int k,pos;
    // cin>>k>>pos;
    // if(pos<5){
    //     for(int i=pos-1;i<5;i++){
    //         if(i==pos){
    //             int temp=marks[i];
    //             int temp2=marks[i+1];                
    //             marks[i]=k;
    //             marks[i+1]=temp;
    //             marks[i+2]=temp2;
               
    //         }
            
            
    //     }
    // }
    // for (int i=0;i<5;i++){
    //     cout<<marks[i]<<endl;
    // }

    int a[11]={0,1,2,3,4,6,7,8,9};
    int pos,curr;
    cin>>curr>>pos;
    for(int i=sizeof(a)/sizeof(int)-1;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=curr;
    for(int i=0;i<sizeof(a)/sizeof(int);i++)
    cout<<"At Index "<<i<<" value is "<<a[i]<<endl;
    return 0;
}