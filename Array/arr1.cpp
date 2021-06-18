#include<iostream>
using namespace std;
int main(){
   //intialize an array according to user's Need
    int n;
    cout<<"enter the length of array that you need"<<endl;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
        int k;
        cout<<"Enter a number to add to the array"<<endl;
        cin>>k;
        array[i]=k;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}