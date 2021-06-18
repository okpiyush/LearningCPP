#include<iostream>
using namespace std;
int main(){
    int n;
    bool ari=true;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a[i]=k;
    }
    int diff=(a[1]-a[0]);
    for(int i=0;i<n-1;i++){
        int cd=a[i+1]-a[i];
        if (cd!=diff){
            ari=false;
            break;
        }else{
            ari=true;
            continue;
        }
    } 
    if (ari){
        cout<<"Arithematic array";
    }else{
        cout<<"Not arithematic array";
    }
    return 0;
}