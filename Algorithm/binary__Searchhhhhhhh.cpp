#include <iostream>
using namespace std;
int main(){
    int n=20;
    int arr[n]={226, 446, 604, 2605, 3172, 5000, 5177, 5964, 6279, 7632, 7981, 8071, 8163, 8177, 8624, 9092, 9813, 9873, 9978, 9997};
    int start,end;
    start=0;
    end=20;
    int mid,s;
    cout<<"What do you want to search in the array ?";
    cin>>s;
    while(true){
        mid =(start+end)/2;
        if(s>arr[mid]){
            start=mid;
            continue;
        }else if(s<arr[mid]){
            end=mid;
            continue;
        }else{
            cout<<mid;
            break;
        }
    }
    return 0;
}