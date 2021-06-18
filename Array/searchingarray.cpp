#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

//linear search
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
            break;
        }
    }
    return -1;
    

}
//binary Search
int binarySearch(int arr[],int n,int key){
    int start,end;
    start=0;
    end=n;
    while(start<end){
        int mid,k;
        k=(start+end)/2;
        mid=arr[k];
        if (key>mid){
            start=k;
            continue;
        }else if(key<mid){
            end=k;
            continue;
        }else{
            return k;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int search=linearSearch(arr,n,key);
    cout<<"Your search is at index "<<search<<endl;
    int searchb=binarySearch(arr,n,key);
    cout<<"Your search is at index "<<searchb<<endl;
    return 0;
}