#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    float avg=0;
    for(int i=0;i<n;i++){
        cin>>k;
        avg+=k;
    }
    avg=avg/n;
    cout<<avg;

    return 0;
}