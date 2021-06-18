#include<iostream>
using namespace std;
int main(){
    int n,counter,sum;
    sum=0;
    cin>>n;
    for(counter=0;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum;
}