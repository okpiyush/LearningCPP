#include<iostream>
using namespace std;
int main(){
    //add positive numbers
    int n,sum;
    cin>>n;
    sum=0;
    while(n>=0){
        sum+=n;
        cin>>n;
    }
    cout<<sum;
}