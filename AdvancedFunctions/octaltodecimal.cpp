#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int otd(int n){
    int dig=0;
    int i=0;
    int temp=0;
    while(n!=0){
        temp=n%10;

        dig=(dig)+(temp*(pow(8,i)));
        n=n/10;
        i++;
     
    }
    return dig;
    
}

int main(){
    int n;
    cin>>n;
    int k=otd(n);
    cout<<k;
}