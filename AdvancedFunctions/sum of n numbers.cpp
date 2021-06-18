#include<iostream>
using namespace std;
int sumn(int n){
    int sum=(n*(n+1))/2;
    return sum;
}
int main(){
    int n;
    cin>>n;
    int k=sumn(n);
    cout<<k;
}
