#include<iostream>
using namespace std;

int search(int arr[],int x,int sear){
        for (int i=0;i<x;i++){
        if(sear==arr[i]){
            return i;
        }
    }
    return -1;
};
int main(){
    //simple search
    int sear;
    int arr[10]={1,2,3,4,5,6,7,8,9};
    cin>>sear;
    cout<< search(arr,10,sear);

    return 0;
}