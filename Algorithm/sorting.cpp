#include <iostream>
using namespace std;
int main(){
    int i,n;
    n=11;
    int arr[n]={121,154,17,148,124,125,14787,0,14,15,19};
    //linear SORT
    int so,ko,temp;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]>=arr[j]){
              temp = arr[j];
              arr[j]=arr[i];
              arr[i]=temp;  
            }
        }   
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

} 