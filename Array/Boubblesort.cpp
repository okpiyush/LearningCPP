#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;int arr[n];
    int count=1;
    while(count<n-1){
        for(int i=0;i<n;i++){
        int temp;
        if (arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        count++;
    }
    }

};