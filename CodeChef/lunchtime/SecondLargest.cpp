//find the second largest
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int l=0;l<T;l++){
        int arr[3];
        for (int i=0;i<3;i++){
            int a;
            arr[i]=a;
        }
        for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        }
    }
    
    } 
}